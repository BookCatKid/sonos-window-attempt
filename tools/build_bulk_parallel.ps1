# Compile every src\generated\bulk\*.cpp with pinned MSVC in parallel workers.
# Each worker owns a slice of the file list; failures are appended to
# out\bulk-failures.log exactly like the serial loop did.
$ErrorActionPreference = 'Continue'
$files = @(Get-ChildItem src\generated\bulk\*.cpp | ForEach-Object { $_.FullName })
# Optional matrix slicing: SONOS_PART_MOD=4 SONOS_PART_SLICE=2 compiles only
# every fourth part so several jobs can split a large corpus.
$mod = 1
if ($env:SONOS_PART_MOD) { $mod = [int]$env:SONOS_PART_MOD }
$slice = 0
if ($env:SONOS_PART_SLICE) { $slice = [int]$env:SONOS_PART_SLICE }
if ($mod -gt 1) {
    $files = @($files | Where-Object { [array]::IndexOf($files, $_) % $mod -eq $slice })
}
$workers = 6
$root = (Get-Location).Path
$jobs = @()
0..($workers - 1) | ForEach-Object {
    $my = @()
    for ($i = $_; $i -lt $files.Count; $i += $workers) {
        $my += $files[$i]
    }
    # ArgumentList splats arrays, so pass the slice as one joined string and
    # split it back apart inside the job.
    $joined = $my -join "`n"
    $jobs += Start-Job -ScriptBlock {
        param([string]$fileList, [string]$root)
        Set-Location $root
        foreach ($f in ($fileList -split "`n")) {
            if (-not $f) { continue }
            $f = $f.Trim()
            $name = [IO.Path]::GetFileNameWithoutExtension($f)
            & cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /FS /c `
                "/Foout\$name.obj" $f *> "out\$name.log"
            if ($LASTEXITCODE -ne 0) {
                "$f" | Out-File -Append -Encoding ascii out\bulk-failures.log
            }
        }
    } -ArgumentList $joined, $root
}
$jobs | Wait-Job | Out-Null
$jobs | Receive-Job
$jobs | Remove-Job
