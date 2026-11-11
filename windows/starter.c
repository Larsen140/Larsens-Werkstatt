/* Larsens Autowerkstatt – Starter für Windows.
   Öffnet die App von GitHub Pages in einem eigenen Fenster (Edge oder Chrome im App-Modus).
   Weil immer die Online-Version geladen wird, kommen Updates von selbst an.
   Bauen:  zig cc -target x86_64-windows-gnu -municode -Wl,--subsystem,windows -Os -s starter.c starter.rc -o Larsens-Autowerkstatt.exe */
#include <windows.h>
#include <shellapi.h>

#define APP_URL L"https://larsen140.github.io/Larsens-Werkstatt/"

int WINAPI wWinMain(HINSTANCE inst, HINSTANCE prev, LPWSTR cmd, int show) {
    (void)inst; (void)prev; (void)cmd; (void)show;
    const wchar_t *args = L"--app=" APP_URL L" --window-size=1440,900";
    /* 1. Microsoft Edge (auf Windows 10 und 11 vorinstalliert), 2. Google Chrome, 3. Standardbrowser */
    HINSTANCE r = ShellExecuteW(NULL, L"open", L"msedge.exe", args, NULL, SW_SHOWNORMAL);
    if ((INT_PTR)r <= 32) r = ShellExecuteW(NULL, L"open", L"chrome.exe", args, NULL, SW_SHOWNORMAL);
    if ((INT_PTR)r <= 32) r = ShellExecuteW(NULL, L"open", APP_URL, NULL, NULL, SW_SHOWNORMAL);
    if ((INT_PTR)r <= 32) {
        MessageBoxW(NULL,
            L"Die Werkstatt konnte nicht geöffnet werden.\n\nÖffne bitte diese Adresse im Browser:\nhttps://larsen140.github.io/Larsens-Werkstatt/",
            L"Larsens Autowerkstatt", MB_OK | MB_ICONINFORMATION);
        return 1;
    }
    return 0;
}
