# Virtueller Speicher

Kernel weist jedem Prozess seinen eigenen virtuellen Speicher zu
Verwaltung durch MMU (Memory Management Unit)

# Segmente des Virtuellen Speicher

Text Segment (read only)
    Programm Code
    Konstanten, String Literale
Bereich initialisierter Daten
    globale und static Variablen (explizit initialisiert)
Bereich uninitialisierter Daten
    globale und static Variablen => Wert 0

Stack
    Dynamisch wachsend und schrumpfend
    Automatische Plfege

Data (Heap)
    bereich für den Dynamischen Speicher
    Dynamisch wachsend und schrumpfend 
    Zugriff und Verwaltung aus laufendem Programm => Pointer

# Pointer sind Variablen
    haben Namen und Wert
    können mit Operatoren verändert werden
    sind einer Speicheradresse im virtuellen Speicher zugeordnet
    