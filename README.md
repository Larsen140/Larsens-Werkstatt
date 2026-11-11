# Larsens Autowerkstatt

Ein 3D-Auto-Konfigurator im Browser. Bau dir dein eigenes Auto, stell es in die Werkstatt und mach daraus ein Hintergrundbild, Profilbild oder Banner. Läuft auf iPhone, iPad, Tablet und PC.

## Link zur App

https://larsen140.github.io/Larsens-Werkstatt/

### GitHub Pages aktivieren

1. Im Repository auf **Settings → Pages** gehen.
2. Bei **Source** „Deploy from a branch“ wählen, Branch **main**, Ordner **/ (root)**.
3. Speichern. Nach ein bis zwei Minuten ist die App unter dem Link oben erreichbar.

## Zum Homescreen hinzufügen

Auf Handy und Tablet muss die App einmal zum Homescreen hinzugefügt werden. Beim ersten Öffnen im Browser zeigt sie die Anleitung an:

- **iPhone und iPad:** Teilen-Symbol → „Zum Home-Bildschirm“ → „Hinzufügen“
- **Android:** „Jetzt installieren“ antippen oder Menü (drei Punkte) → „App installieren“

Danach startet sie vom Homescreen im Vollbild und läuft auch ohne Internet. Am PC öffnet sie sich direkt im Browser.

## Was die App kann

- **14 Karosserien:** vom Sportcoupé über SUV, Pickup und Van bis zum Stadtflitzer
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
- `manifest.webmanifest`, `sw.js` und die Symbole – machen die Seite zur installierbaren App

Die Karosserien sind eigene, markenfreie Formen und keine Nachbauten echter Automodelle.
