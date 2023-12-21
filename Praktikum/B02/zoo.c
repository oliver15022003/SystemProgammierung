#include <stdio.h>
#include "zoo.h"

Animal zoo[ANIMALCOUNT];

void print_animal(Animal animal) {
    printf("Tier: %s Alter: %d Food Weight: %f\n", animal.name, animal.age, animal.food_weight);
}

int count_animals() {
    int i;
    int animal_count = 0;
    for (i = 0; i < ANIMALCOUNT; i++) {
        if (zoo[i].species != 0) {
            animal_count++;
            print_animal(zoo[i]);
        }
    }

    return animal_count;
}

float calculate_average_age() {
    int i;
    int animal_count = count_animals();
    float sum_age = 0;

    for (i = 0; i < ANIMALCOUNT; i++) {
        sum_age += zoo[i].age;
    }

    if (animal_count > 0) {
        return sum_age / animal_count;
    }
    return 0;
}

void more_food() {
    int i;
    for (i = 0; i < ANIMALCOUNT; i++) {
        float added_weight = zoo[i].food_weight * (float)(zoo[i].species) / 100;
        zoo[i].food_weight += added_weight;
    }
}

void print_zoo() {
    count_animals();
}

