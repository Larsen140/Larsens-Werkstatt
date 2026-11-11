# Larsens Autowerkstatt

Ein 3D-Auto-Konfigurator im Browser. Bau dir dein eigenes Auto, stell es in die Werkstatt und mach daraus ein Hintergrundbild, Profilbild oder Banner. Läuft auf iPhone, iPad, Tablet und PC.

## Link zur App

https://larsen140.github.io/Larsens-Werkstatt/

### GitHub Pages aktivieren

1. Im Repository auf **Settings → Pages** gehen.
2. Bei **Source** „Deploy from a branch“ wählen, Branch **main**, Ordner **/ (root)**.
3. Speichern. Nach ein bis zwei Minuten ist die App unter dem Link oben erreichbar.

## Windows-Programm

[`windows/Larsens-Autowerkstatt.exe`](windows/Larsens-Autowerkstatt.exe) öffnet die Werkstatt am PC in einem eigenen Fenster, ohne Adressleiste.

- **Herunterladen:** Datei anklicken, dann oben rechts „Download raw file“.
- **Updates:** Das Programm lädt immer die Online-Version von GitHub. Neue Versionen kommen also von selbst an, die Datei muss nie neu geladen werden.
- **Voraussetzung:** Internet beim ersten Start sowie Microsoft Edge (auf Windows 10 und 11 vorinstalliert) oder Google Chrome. Danach läuft die App auch ohne Internet.
- **Warnung beim ersten Start:** Windows zeigt „Der Computer wurde durch Windows geschützt“, weil das Programm nicht signiert ist. Auf „Weitere Informationen“ und dann „Trotzdem ausführen“ klicken.

Der Quelltext liegt daneben (`windows/starter.c`); gebaut wird mit dem Befehl, der oben in der Datei steht.

## Werbevideo

[`video/werbung.mp4`](video/werbung.mp4) – 34 Sekunden im Hochformat (1080 × 1920), direkt aus der App gefilmt.

## Zum Homescreen hinzufügen

Auf Handy und Tablet muss die App einmal zum Homescreen hinzugefügt werden. Beim ersten Öffnen im Browser zeigt sie die Anleitung an:

- **iPhone und iPad:** Teilen-Symbol → „Zum Home-Bildschirm“ → „Hinzufügen“
- **Android:** „Jetzt installieren“ antippen oder Menü (drei Punkte) → „App installieren“

Danach startet sie vom Homescreen im Vollbild und läuft auch ohne Internet. Am PC öffnet sie sich direkt im Browser.

## Was die App kann

- **67 Modelle in 12 Kategorien:** Sportwagen, Supersportler, Muscle Cars, Klassiker, Limousinen, Kombis, Kompakte, SUV, Geländewagen, Pickups, Vans und Elektro-Studien
- **Lack:** jede Farbe, 9 Lackarten, Kontrast- oder Glasdach, Rennstreifen, Farbwechsel-Animation
- **Felgen und Reifen:** 8 Designs, 16 bis 23 Zoll, Bremssättel, Reifenprofile, Breite, Sturz
- **Tuning:** Fahrwerk, Spoiler, Breitbau-Kit, Dachbox, LED-Leiste, Startnummer, Unterbodenlicht, Hydraulik
- **Motor und Sound:** 9 Motoren, Leistungsstufen, Auspuffanlagen, Nitro, Hupe
- **Innenraum:** Sitze, Bezüge, Farben, Ambientelicht, Blick vom Fahrersitz
- **Umgebungen:** Werkstatt mit Hebebühne, Rennstrecke, Studios, Abendsonne, Neon-Nacht
- **Fotostudio:** Hintergrundbild, Profilbild, Banner und Story mit 10 Kulissen, Kamera-Reglern, Filtern, Effekten, Rahmen und eigenem Text
- **Garage:** bis zu 12 eigene Autos speichern und wieder laden

## Dateien

- `index.html` – die fertige App, wie GitHub Pages sie ausliefert
- `app.html` – die App-Quelle; `./build.sh` baut daraus `index.html`
- `UPDATES.md` – Liste aller Updates
- `sounds/` – Motor-Aufnahmen; Quellen und Lizenzen stehen in `SOUNDS.md`
- `manifest.webmanifest`, `sw.js` und die Symbole – machen die Seite zur installierbaren App

Die Karosserien sind eigene, markenfreie Formen und keine Nachbauten echter Automodelle.
