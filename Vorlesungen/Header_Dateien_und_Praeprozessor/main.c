/* ====== main.c ====== */

#include <stdio.h>
#include "blatt.h"

int main(){
    fkt1();
    fkt2();
    return 0;
}

/*
blatt.c muss in eine Object Datei kompiliert werden mit:

gcc -c blatt.c -o blatt.o 

main.c muss in eine Object Datei kompiliert werden und dabei 
muss darauf geachtet werden das die blatt.h Header Datei included wurde

gcc -c main.c -o main.o

Jetzt müssen die Object Dateien verbunden werden um eine Ausführbare Datei zu erstellen

gcc main.o blatt.o -o myprogram

Das Programm kann man nun mit "./myprogram" ausführen



<
*/