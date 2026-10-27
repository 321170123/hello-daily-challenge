Add-Type -TypeDefinition @'
using System;
using System.Text;
using System.Runtime.InteropServices;
using System.Collections.Generic;
public class EnumW {
    public delegate bool EnumProc(IntPtr h, IntPtr l);
    [DllImport("user32.dll")] public static extern bool EnumWindows(EnumProc cb, IntPtr l);
    [DllImport("user32.dll")] public static extern int GetWindowText(IntPtr h, StringBuilder s, int n);
    [DllImport("user32.dll")] public static extern bool ShowWindow(IntPtr h, int c);
    [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr h);
    [DllImport("user32.dll")] public static extern void keybd_event(byte bVk, byte bScan, uint f, UIntPtr ex);
    public static List<IntPtr> Find(string key) {
        var r = new List<IntPtr>();
        EnumWindows((h, l) => {
            var sb = new StringBuilder(512);
            GetWindowText(h, sb, 512);
            if (sb.ToString().Contains(key)) r.Add(h);
            return true;
        }, IntPtr.Zero);
        return r;
    }
}
'@
$wins = [EnumW]::Find("Ubuntu")
$target = $wins | Select-Object -First 1
foreach ($w in $wins) {
    $sb = New-Object System.Text.StringBuilder 512
    [EnumW]::GetWindowText($w, $sb, 512) | Out-Null
    "$w : $($sb.ToString())"
}
if ($target) {
    [EnumW]::keybd_event(0x12, 0, 0, [UIntPtr]::Zero)
    [EnumW]::keybd_event(0x12, 0, 2, [UIntPtr]::Zero)
    [EnumW]::ShowWindow($target, 3) | Out-Null
    Start-Sleep -Milliseconds 800
    [EnumW]::SetForegroundWindow($target) | Out-Null
    Start-Sleep 1
    Add-Type -AssemblyName System.Windows.Forms, System.Drawing
    $b = [System.Windows.Forms.Screen]::PrimaryScreen.Bounds
    $bmp = New-Object System.Drawing.Bitmap $b.Width, $b.Height
    $g = [System.Drawing.Graphics]::FromImage($bmp)
    $g.CopyFromScreen($b.Location, [System.Drawing.Point]::Empty, $b.Size)
    $bmp.Save('H:\Vs26\Project20\_vm_check.jpg', [System.Drawing.Imaging.ImageFormat]::Jpeg)
    $g.Dispose(); $bmp.Dispose()
    "captured with handle $target"
} else {
    "no window found"
}
