# Sound-Quellen

Die Motor-, Elektro- und Turbo-Klänge in `sounds/` sind Aufnahmen aus dem Open-Source-Rennspiel
[Stunt Rally 3](https://github.com/stuntrally/stuntrally3) (Ordner `data/sounds/engines`).

| Dateien | Urheber | Lizenz | Herkunft |
|---|---|---|---|
| `su-low-*`, `su-ss-*`, `tsu-*`, `b-i6r-*`, `b-v8-*`, `gv8-*`, `v8f-*`, `v12d-*`, `electric*` | CryHam | [CC BY 4.0](https://creativecommons.org/licenses/by/4.0/) | Aufgenommen in [engine-sim](https://github.com/ange-yaghi/engine-sim) bei festen Drehzahlen (1000, 2000, … U/min), in Audacity geschnitten und entzerrt |
| `turbo5` | CryHam, auf Basis von „fuchslienshroud.wav“ von [shimsewn](https://freesound.org/people/shimsewn/sounds/87606/) | CC BY 4.0 | freesound.org, in Audacity bearbeitet |

## Echte Aufnahmen von der Straße

Diese Dateien sind Mikrofon-Aufnahmen echter Fahrzeuge. Sie stammen aus dem Datensatz
[ESC-50](https://github.com/karolpiczak/ESC-50) (dort als 5-Sekunden-Ausschnitte) und ursprünglich von freesound.org.

| Datei | Original | Urheber | Lizenz |
|---|---|---|---|
| `real-4` | [samurai_tailpipe.wav](https://www.freesound.org/people/Corsica_S/sounds/106015/) (Vierzylinder im Leerlauf, am Auspuff) | Corsica_S | [CC BY 3.0](https://creativecommons.org/licenses/by/3.0/) |
| `real-6` | [Idle and Rev - Engine.wav](https://www.freesound.org/people/wikusv/sounds/232272/) | wikusv | CC BY 3.0 |
| `real-8` | [Chrysler Start and Idle](https://www.freesound.org/people/lonemonk/sounds/240671/) (V8 im Leerlauf) | lonemonk | CC BY 3.0 |
| `horn` | [car-horn.wav](https://www.freesound.org/people/krissyeliot/sounds/125520/) | krissyeliot | CC0 |

Sie laufen im Leerlauf und bei niedriger Drehzahl; darüber blendet die App in die Simulator-Aufnahmen über.

## Änderungen für diese App

Jede Datei wurde auf Mono und 32 kHz umgerechnet, auf höchstens 1,6 Sekunden gekürzt, an den
Enden überblendet (damit sie nahtlos in Schleife läuft), auf gleiche Lautstärke gebracht und
als FLAC gespeichert. Pro Motor werden fünf Drehzahlstufen verwendet.

## Was es ist und was nicht

Echt aufgenommen sind Leerlauf, niedrige Drehzahlen und die Hupe. Die Klänge bei hohen Drehzahlen
stammen aus einem physikalischen Motor-Simulator. Nitro, Anlasser, Fehlzündungen und die
Werkstatt-Geräusche werden in der App erzeugt.
