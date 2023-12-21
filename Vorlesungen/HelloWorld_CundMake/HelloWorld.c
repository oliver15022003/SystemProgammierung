/* 
c Dateien werden mit der Endung ".c" gespeichert 

Compilieren des Codes mit "gcc Dateiname.c"
erstellt .exe datei welche man mit "./a.out" oder "./a.exe" ausführen kann

Besser ist es den Code mit "gcc -ansi -pedantic -Wall -o helloworld Dateiname.c" zu kompilieren
-ansi = Umschalten auf Ansi (C90) Standard
-pedantic = Warnungen 
-Wall = Alle Warnungen anschalten
-o = Namen für die ausführbare Datei geben

ausführen mit "./helloworld"
*/

#include <stdio.h>
int main() {
   printf("Hello, World!");
   return 0;
}
/*
Defines: 
Text mit Ersatztext ersetzen (wird für Konstanten genutzt)
#define Makroname Ersatztext

Header Dateien: 
#include "Dateiname" Aktueller Ordner
#include "Dateiname" Standardverzeichnis




*/