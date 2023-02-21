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
        STR_EN("Loading…"),
        STR_DE("Lade…"),
    },

    [StrId_AppletMode] =
    {
        STR_EN("● Applet Mode ●"),
        STR_DE("● Minianwendung Modus ●"),
    },

    [StrId_Directory] =
    {
        STR_EN("Directory"),
        STR_DE("Verzeichnis"),
    },

    /*[StrId_DefaultLongTitle] =
    {
        STR_EN("Homebrew application"),
        STR_DE("Homebrew-Anwendung"),
    },*/

    [StrId_DefaultPublisher] =
    {
        STR_EN("Unknown author"),
        STR_DE("Unbekannter Autor"),
    },

    [StrId_IOError] =
    {
        STR_EN("I/O Error"),
        STR_DE("E/A-Fehler"),
    },

    [StrId_CouldNotOpenFile] =
    {
        STR_EN("Could not open file:\n%s"),
        STR_DE("Konnte Datei nicht öffnen:\n%s"),
    },

    [StrId_NroNotFound] =
    {
        STR_EN("Could not find executable: %s"),
        STR_DE("Ausführbare Anwendung nicht gefunden: %s"),
    },

    [StrId_NoAppsFound_Title] =
    {
        STR_EN("No applications found"),
        STR_DE("Keine Anwendungen gefunden"),
    },

    [StrId_NoAppsFound_Msg] =
    {
        STR_EN(
            "No applications could be found on the SD card.\n"
            "Make sure a folder named /switch exists in the\n"
            "root of the SD card and it contains applications.\n"
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
        STR_EN("The last application returned an error:"),
        STR_DE("Die letzte Anwendung erzeugte einen Fehler:"),
    },

    [StrId_AppLaunchError] =
    {
        STR_EN("Failed to launch the application:"),
        STR_DE("Konnte die Anwendung nicht starten:"),
    },

    [StrId_AppInfo_Author] =
    {
        STR_EN("Author"),
        STR_DE("Autor"),
    },

    [StrId_AppInfo_Version] =
    {
        STR_EN("Version"),
        STR_DE("Version"),
    },

    [StrId_Actions_Launch] =
    {
        STR_EN("Launch"),
        STR_DE("Starten"),
    },

    [StrId_Actions_Open] =
    {
        STR_EN("Open"),
        STR_DE("Öffnen"),
    },

    [StrId_Actions_Back] =
    {
        STR_EN("Back"),
        STR_DE("Zurück"),
    },

    [StrId_MsgBox_OK] =
    {
        STR_EN("OK"),
        STR_DE("OK"),
    },

    [StrId_Actions_Apply] =
    {
        STR_EN("Apply"),
        STR_DE("Anwenden"),
    },

    [StrId_Actions_Star] =
    {
        STR_EN("Star"),
        STR_DE("Zu Favoriten hinzufügen"),
    },

    [StrId_Actions_Unstar] =
    {
        STR_EN("Unstar"),
        STR_DE("Aus Favoriten entfernen"),
    },

    [StrId_ThemeMenu] =
    {
        STR_EN("Theme Menu"),
        STR_DE("Theme Menü"),
    },

    [StrId_ThemeNotApplied] =
    {
        STR_EN("Theme cannot be applied because an error occurred."),
        STR_DE("Das Theme konnte nicht geladen werden, da ein Fehler aufgetreten ist."),
    },

    [StrId_DefaultThemeName] =
    {
        STR_EN("Default Theme"),
        STR_DE("Standard Theme"),
    },

    /*[StrId_Reboot] =
    {
        STR_EN(
            "Returning to \xEE\x81\xB3HOME is not available.\n"
            "You're about to reboot your console.\n\n"
            "  \xEE\x80\x80 Reboot\n"
            "  \xEE\x80\x81 Cancel"
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
            "You're about to return to \xEE\x81\xB3HOME.\n\n"
            "  \xEE\x80\x80 Return\n"
            "  \xEE\x80\x81 Cancel\n"
            "  \xEE\x80\x82 Reboot"
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
        STR_EN("Title selector"),
        STR_DE("Titel-Auswahl"),
    },

    [StrId_ErrorReadingTitleMetadata] =
    {
        STR_EN("Error reading title metadata.\n%08lX%08lX@%d"),
        STR_DE("Fehler beim Lesen der Titel-Metadaten.\n%08lX%08lX@%d"),
    },

    [StrId_NoTitlesFound] =
    {
        STR_EN("No titles could be detected."),
        STR_DE("Keine Titel gefunden."),
    },

    [StrId_SelectTitle] =
    {
        STR_EN(
            "Please select a target title.\n\n"
            "  \xEE\x80\x80 Select\n"
            "  \xEE\x80\x81 Cancel"
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
            "This homebrew exploit does not have support\n"
            "for launching applications under target titles.\n"
            "Please use a different exploit."
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
            "The application you attempted to run requires\n"
            "a title that is not installed in the system."
        ),
        STR_DE(
            "Die ausgewählte Anwendung benötigt einen\n"
            "Titel der nicht installiert ist."
        ),
     },*/

    [StrId_NetLoader] =
    {
        STR_EN("NetLoader"),
        STR_DE("Netzwerk-Loader"),
    },

    [StrId_NetLoaderUnavailable] =
    {
        STR_EN("The NetLoader is currently unavailable."),
        STR_DE("Der Netzwerk-Loader ist zur Zeit nicht verfügbar."),
    },

    [StrId_NetLoaderError] =
    {
        STR_EN("An error occurred.\nTechnical details: [%s:%d]"),
        STR_DE("Ein Fehler ist aufgetreten\nTechnische Details: [%s:%d]"),
    },

    [StrId_NetLoaderOffline] =
    {
        STR_EN("Offline, waiting for network…"),
        STR_DE("Offline, warte auf Netzwerk…"),
    },

    [StrId_NetLoaderActive] =
    {
        STR_EN(
            "Waiting for nxlink to connect…\n"
            "IP Addr: %lu.%lu.%lu.%lu, Port: %d"
        ),
        STR_DE(
            "Warte auf Verbindung von nxlink…\n"
            "IP Addr: %lu.%lu.%lu.%lu, Port: %d"
        ),
     },

    [StrId_NetLoaderTransferring] =
    {
        STR_EN(
            "Transferring…\n"
            "%zu out of %zu KiB written"
        ),
        STR_DE(
            "Übertragen…\n"
            "%zu von %zu KiB geschrieben"
        ),
     },
};
