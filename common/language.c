#include "language.h"

#ifdef __SWITCH__
#define STR_EN(_str) [SetLanguage_ENUS] = _str, [SetLanguage_ENGB] = _str
#define STR_DE(_str) [SetLanguage_DE] = _str
#else
#define STR_EN(_str) [1] = _str
#define STR_DE(_str) [3] = _str
#endif

const char* const g_strings[StrId_Max][17] =
{
    [StrId_Loading] =
    {
        STR_EN("Lade…"),
        STR_DE("Lade…"),
    },

    [StrId_AppletMode] =
    {
        STR_EN("● Minianwendung Modus ●"),
        STR_DE("● Minianwendung Modus ●"),
    },

    [StrId_Directory] =
    {
        STR_EN("Verzeichnis"),
        STR_DE("Verzeichnis"),
    },

    /*[StrId_DefaultLongTitle] =
    {
        STR_EN("Homebrew-Anwendung"),
        STR_DE("Homebrew-Anwendung"),
    },*/

    [StrId_DefaultPublisher] =
    {
        STR_EN("Unbekannter Autor"),
        STR_DE("Unbekannter Autor"),
    },

    [StrId_IOError] =
    {
        STR_EN("E/A-Fehler"),
        STR_DE("E/A-Fehler"),
    },

    [StrId_CouldNotOpenFile] =
    {
        STR_EN("Konnte Datei nicht öffnen:\n%s"),
        STR_DE("Konnte Datei nicht öffnen:\n%s"),
    },

    [StrId_NroNotFound] =
    {
        STR_EN("Ausführbare Anwendung nicht gefunden: %s"),
        STR_DE("Ausführbare Anwendung nicht gefunden: %s"),
    },

    [StrId_NoAppsFound_Title] =
    {
        STR_EN("Keine Anwendungen gefunden"),
        STR_DE("Keine Anwendungen gefunden"),
    },

    [StrId_NoAppsFound_Msg] =
    {
        STR_EN(
            "Auf der SD-Karte wurden keine Anwendungen\n"
            "gefunden. Stelle sicher, dass ein Verzeichnis\n"
            "namens /switch im Hauptverzeichnis der SD-Karte\n"
            "existiert und Anwendungen enthält!"
        ),
        STR_DE(
            "Auf der SD-Karte wurden keine Anwendungen\n"
            "gefunden. Stelle sicher, dass ein Verzeichnis\n"
            "namens /switch im Hauptverzeichnis der SD-Karte\n"
            "existiert und Anwendungen enthält!"
        ),
     },

    [StrId_LastLoadResult] =
    {
        STR_EN("Die letzte Anwendung erzeugte einen Fehler:"),
        STR_DE("Die letzte Anwendung erzeugte einen Fehler:"),
    },

    [StrId_AppLaunchError] =
    {
        STR_EN("Konnte die Anwendung nicht starten:"),
        STR_DE("Konnte die Anwendung nicht starten:"),
    },

    [StrId_AppInfo_Author] =
    {
        STR_EN("Autor"),
        STR_DE("Autor"),
    },

    [StrId_AppInfo_Version] =
    {
        STR_EN("Version"),
        STR_DE("Version"),
    },

    [StrId_Actions_Launch] =
    {
        STR_EN("Starten"),
        STR_DE("Starten"),
    },

    [StrId_Actions_Open] =
    {
        STR_EN("Öffnen"),
        STR_DE("Öffnen"),
    },

    [StrId_Actions_Back] =
    {
        STR_EN("Zurück"),
        STR_DE("Zurück"),
    },

    [StrId_MsgBox_OK] =
    {
        STR_EN("OK"),
        STR_DE("OK"),
    },

    [StrId_Actions_Apply] =
    {
        STR_EN("Anwenden"),
        STR_DE("Anwenden"),
    },

    [StrId_Actions_Star] =
    {
        STR_EN("Favorit hinzuf."),
        STR_DE("Favorit hinzuf."),
    },

    [StrId_Actions_Unstar] =
    {
        STR_EN("Favorit entf."),
        STR_DE("Favorit entf."),
    },

    [StrId_ThemeMenu] =
    {
        STR_EN("Theme Menü"),
        STR_DE("Theme Menü"),
    },

    [StrId_ThemeNotApplied] =
    {
        STR_EN("Das Theme konnte nicht angewendet werden, da ein Fehler aufgetreten ist."),
        STR_DE("Das Theme konnte nicht angewendet werden, da ein Fehler aufgetreten ist."),
    },

    [StrId_DefaultThemeName] =
    {
        STR_EN("Default Theme"),
        STR_DE("Standard Theme"),
    },

    /*[StrId_Reboot] =
    {
        STR_EN(
            "Rückkehr zu \xEE\x81\xB3HOME nicht verfügbar.\n"
            "Deine Konsole wird neu gestartet.\n\n"
            "  \xEE\x80\x80 Neu starten\n"
            "  \xEE\x80\x81 Abbrechen"
        ),
        STR_DE(
            "Rückkehr zu \xEE\x81\xB3HOME nicht verfügbar.\n"
            "Deine Konsole wird neu gestartet.\n\n"
            "  \xEE\x80\x80 Neu starten\n"
            "  \xEE\x80\x81 Abbrechen"
        ),
     },*/

    /*[StrId_ReturnToHome] =
    {
        STR_EN(
            "Rückkehr zum \xEE\x81\xB3HOME-Menü.\n\n"
            "  \xEE\x80\x80 Fortfahren\n"
            "  \xEE\x80\x81 Abbrechen\n"
            "  \xEE\x80\x82 Konsole neustarten"
        ),
        STR_DE(
            "Rückkehr zum \xEE\x81\xB3HOME-Menü.\n\n"
            "  \xEE\x80\x80 Fortfahren\n"
            "  \xEE\x80\x81 Abbrechen\n"
            "  \xEE\x80\x82 Konsole neustarten"
        ),
     },*/

    /*[StrId_TitleSelector] =
    {
        STR_EN("Titel-Auswahl"),
        STR_DE("Titel-Auswahl"),
    },

    [StrId_ErrorReadingTitleMetadata] =
    {
        STR_EN("Fehler beim Lesen der Titel-Metadaten.\n%08lX%08lX@%d"),
        STR_DE("Fehler beim Lesen der Titel-Metadaten.\n%08lX%08lX@%d"),
    },

    [StrId_NoTitlesFound] =
    {
        STR_EN("Keine Titel gefunden."),
        STR_DE("Keine Titel gefunden."),
    },

    [StrId_SelectTitle] =
    {
        STR_EN(
            "Bitte wähle den Ziel-Titel aus.\n\n"
            "  \xEE\x80\x80 Auswählen\n"
            "  \xEE\x80\x81 Abbrechen"
        ),
        STR_DE(
            "Bitte wähle den Ziel-Titel aus.\n\n"
            "  \xEE\x80\x80 Auswählen\n"
            "  \xEE\x80\x81 Abbrechen"
        ),
     },

    [StrId_NoTargetTitleSupport] =
    {
        STR_EN(
            "Dieser Homebrew-Exploit unterstützt das Starten\n"
            "von Anwendungen unter Ziel-Titeln nicht.\n"
            "Bitte verwende einen anderen Exploit."
        ),
        STR_DE(
            "Dieser Homebrew-Exploit unterstützt das Starten\n"
            "von Anwendungen unter Ziel-Titeln nicht.\n"
            "Bitte verwende einen anderen Exploit."
        ),
    },

    [StrId_MissingTargetTitle] =
    {
        STR_EN(
            "Die ausgewählte Anwendung benötigt einen\n"
            "Titel der nicht installiert ist."
        ),
        STR_DE(
            "Die ausgewählte Anwendung benötigt einen\n"
            "Titel der nicht installiert ist."
        ),
     },*/

    [StrId_NetLoader] =
    {
        STR_EN("NX-Link Verbindung"),
        STR_DE("NX-Link Verbindung"),
    },

    [StrId_NetLoaderUnavailable] =
    {
        STR_EN("NX-Link Verbindung ist zur Zeit nicht verfügbar."),
        STR_DE("NX-Link Verbindung ist zur Zeit nicht verfügbar."),
    },

    [StrId_NetLoaderError] =
    {
        STR_EN("Ein Fehler ist aufgetreten\nTechnische Details: [%s:%d]"),
        STR_DE("Ein Fehler ist aufgetreten\nTechnische Details: [%s:%d]"),
    },

    [StrId_NetLoaderOffline] =
    {
        STR_EN("Offline, warte auf Netzwerk…"),
        STR_DE("Offline, warte auf Netzwerk…"),
    },

    [StrId_NetLoaderActive] =
    {
        STR_EN(
            "Warte auf Verbindung von nxlink…\n"
            "IP Addresse: %lu.%lu.%lu.%lu, Port: %d"
        ),
        STR_DE(
            "Warte auf Verbindung von nxlink…\n"
            "IP Addresse: %lu.%lu.%lu.%lu, Port: %d"
        ),
     },

    [StrId_NetLoaderTransferring] =
    {
        STR_EN(
            "Übertragen…\n"
            "%zu von %zu KiB geschrieben"
        ),
        STR_DE(
            "Übertragen…\n"
            "%zu von %zu KiB geschrieben"
        ),
     },
};
