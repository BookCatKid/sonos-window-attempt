# Compile every src\generated\bulk\*.cpp with pinned MSVC in parallel workers.
# Each worker owns a slice of the file list; failures are appended to
# out\bulk-failures.log exactly like the serial loop did.
$ErrorActionPreference = 'Continue'
$files = @(Get-ChildItem src\generated\bulk\*.cpp | ForEach-Object { $_.FullName })
$workers = 6
$root = (Get-Location).Path
$jobs = 1..$workers | ForEach-Object {
    $slice = $_
    Start-Job -ScriptBlock {
        param($files, $slice, $workers, $root)
        Set-Location $root
        for ($i = $slice - 1; $i -lt $files.Count; $i += $workers) {
            $f = $files[$i]
            $name = [IO.Path]::GetFileNameWithoutExtension($f)
            & cl /nologo /O2 /bigobj /MD /GS /GR /EHsc /Zi /c `
                "/Foout\$name.obj" $f *> "out\$name.log"
            if ($LASTEXITCODE -ne 0) {
                "$f" | Out-File -Append -Encoding ascii out\bulk-failures.log
            }
        }
    } -ArgumentList (, $files), $slice, $workers, $root
}
$jobs | Wait-Job | Out-Null
$jobs | Receive-Job
$jobs | Remove-Job
