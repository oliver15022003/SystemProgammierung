#include <stdio.h>

int meineFunktion(int a, int b)
{
    return a+b;
}

int main()
{
    int (*fp) (int, int);

    fp = &meineFunktion;
    // fp = meine funktion

    int erg = (*fp) (12, 25);
    // int erg = fp(12, 25);

    printf("Ergebnis: %d", erg); 
}