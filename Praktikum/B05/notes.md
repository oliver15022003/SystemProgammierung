# Notes 
Ringbuffer ist eine Datenstruktur
zirkulaere Warteschlange mit festem           Speicherbereich
besteht aus array fester groeße 
lese und schreibe zeiger die auf verschiedene positionen im array zeigen
wenn der schreibzeiger das ende des arrays erreicht, dann springt er zurück zum anfang des arrays wodurch ein ring entsteht 
alte daten werden ueberschrieben wenn der puffer voll ist

