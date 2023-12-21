/* ====== pointer.c ====== */

/* iptr ist ein Pointer auf eine beliebige Speicherzelle mit Inhalt vom Typ int*/
int i = 99;
int *iptr;

/* Wert von iptr ist gleich Adresse von i */
iptr = &i;

/* Anwendung: Einlesen von Tastatureingaben */

/* C: Call by Value! Wie kann scanf in die Variable schreiben? 
=> Uebergebe die Adresse von alter, d.h einen Pointer auf alter!*/
int x, alter;
X = scanf("&d", &alter);