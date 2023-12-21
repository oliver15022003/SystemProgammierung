#ifndef ZOO_H
#define ZOO_H

#include "animal.h"

#define ANIMALCOUNT 10

/* Deklaration des Globalen Arrays */ 
extern Animal zoo[ANIMALCOUNT]; 

void print_animal(Animal animal);
int count_animals();
float calculate_average_age();
void more_food();
void print_zoo();

#endif
