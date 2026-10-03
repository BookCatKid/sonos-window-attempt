# Compile every src\generated\bulk\*.cpp with pinned MSVC in parallel workers.
# Each worker owns a slice of the file list; failures are appended to
# out\bulk-failures.log exactly like the serial loop did.
$ErrorActionPreference = 'Continue'
$files = @(Get-ChildItem src\generated\bulk\*.cpp | ForEach-Object { $_.FullName })
$workers = 6
$root = (Get-Location).Path
$jobs = @()
0..($workers - 1) | ForEach-Object {
    $my = @()
    for ($i = $_; $i -lt $files.Count; $i += $workers) {
        $my += $files[$i]
    }
    # ArgumentList splats arrays, so wrap the slice to keep it one argument.
    $jobs += Start-Job -ScriptBlock {
        param([string[]]$files, [string]$root)
        Set-Location $root
        foreach ($f in $files) {
            $name = [IO.Path]::GetFileNameWithoutExtension($f)
            & cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c `
                "/Foout\$name.obj" $f *> "out\$name.log"
            if ($LASTEXITCODE -ne 0) {
                "$f" | Out-File -Append -Encoding ascii out\bulk-failures.log
            }
        }
    } -ArgumentList (, $my), $root
}
$jobs | Wait-Job | Out-Null
$jobs | Receive-Job
$jobs | Remove-Job
