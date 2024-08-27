# Fahrschalterausleseprogramm

## Beschreibung
Dieses Projekt ermöglicht die Auslesung des aktuellen Zustands eines Kiepe-Fahrschalters basierend auf der Ausführung in M8C Stadtbahnwagen der Stadtwerke Bielefeld GmbH.
Es soll zur Integration mit einer Simulatorsoftware (LOTUS, ZuSi, etc.) sowie zu Diagnosezwecken benutzt werden können.


## Anschluss
In der Bielefelder Ausführung verfügt der Fahrschalter über ein Schloss, welches die Freigabe des Steuerschalters ermöglicht. Dieser hat drei verschiedene Positionen (0, 1, V).
Außerdem gibt es einen im Fahrbremshebel integrierten Taster für die Sicherheitsfahrschaltung (SiFa) und einen Schlüsselschalter zum Entkuppeln des Wagens.
Der Fahrbremshebel selbst steuert ein Potentiometer, welches ja nach Stellung des Bremsen-Pins entweder die Beschleungs- oder die Bremskraft angibt.

Die Pins im Sketch müssen je nach Belegung in anderen Verkehrsbetrieben angepasst werden.

## Status
Aktuell handelt es sich lediglich um einen Prototypen mit seriellem Output. In der Zukunft sind Gamecontroller- oder MIDI-Schnittstellenemulation denkbar.

