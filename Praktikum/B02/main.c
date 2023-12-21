#include <stdio.h>
#include <string.h>
#include "zoo.h"

int main() {
    /* Globale Arrays werden standardmäßig mit Null
    initialisiert. Fehlende Tiere würden den Wert 0 haben*/
    zoo[0].species = FISH;
    strcpy(zoo[0].name, "Salmon");
    zoo[0].age = 2;
    zoo[0].food_weight = 40.0;

    zoo[1].species = REPTILES;
    strcpy(zoo[1].name, "Crocodile");
    zoo[1].age = 60;
    zoo[1].food_weight = 300.20;

    zoo[2].species = MAMAL;
    strcpy(zoo[2].name, "Icebear");
    zoo[2].age = 13;
    zoo[2].food_weight = 421.1;

    zoo[3].species = BIRD;
    strcpy(zoo[3].name, "Sparrow");
    zoo[3].age = 1;
    zoo[3].food_weight = 0.5;

    more_food();

    print_zoo();

    return 0;
}
