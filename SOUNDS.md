# Sound-Quellen

Die Motor-, Elektro- und Turbo-Klänge in `sounds/` sind Aufnahmen aus dem Open-Source-Rennspiel
[Stunt Rally 3](https://github.com/stuntrally/stuntrally3) (Ordner `data/sounds/engines`).

| Dateien | Urheber | Lizenz | Herkunft |
|---|---|---|---|
| `su-low-*`, `su-ss-*`, `tsu-*`, `b-i6r-*`, `b-v8-*`, `gv8-*`, `v8f-*`, `v12d-*`, `electric*` | CryHam | [CC BY 4.0](https://creativecommons.org/licenses/by/4.0/) | Aufgenommen in [engine-sim](https://github.com/ange-yaghi/engine-sim) bei festen Drehzahlen (1000, 2000, … U/min), in Audacity geschnitten und entzerrt |
| `turbo5` | CryHam, auf Basis von „fuchslienshroud.wav“ von [shimsewn](https://freesound.org/people/shimsewn/sounds/87606/) | CC BY 4.0 | freesound.org, in Audacity bearbeitet |

## Änderungen für diese App

Jede Datei wurde auf Mono und 32 kHz umgerechnet, auf höchstens 1,6 Sekunden gekürzt, an den
Enden überblendet (damit sie nahtlos in Schleife läuft), auf gleiche Lautstärke gebracht und
als FLAC gespeichert. Pro Motor werden fünf Drehzahlstufen verwendet.

## Was es ist und was nicht

Die Aufnahmen stammen aus einem physikalischen Motor-Simulator, nicht von einem Mikrofon an
echten Autos. Hupe, Nitro, Anlasser, Fehlzündungen und die Werkstatt-Geräusche werden in der
App erzeugt.
