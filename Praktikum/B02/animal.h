#ifndef ANIMAL_H
#define ANIMAL_H

typedef enum {
    EMPTY = 0,
    MAMAL = 10,
    FISH = 4,
    BIRD = 1,
    AMPHIBIAN = 2,
    REPTILES
} Viech;

typedef struct {
    Viech species;
    char name[30];
    unsigned int age;
    float food_weight;
} Animal;

#endif
