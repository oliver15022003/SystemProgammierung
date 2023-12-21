/* ===== main.c ====== */

#include <stdio.h>

#define ANIMALCOUNT 10



/* Viech Enum */
typedef enum{
    EMPTY = 0,
    MAMAL = 10,
    FISH = 4,
    BIRD = 1,
    AMPHIBIAN = 2,
    REPTILES
}Viech;

typedef struct {
    Viech species;
    char name[30];
    unsigned int age;
    float food_weight;

}Animal;

Animal zoo[ANIMALCOUNT];

void print_animal(Animal animal){
    printf("Tier: %s Alter: %d Food Weight: %f\n", animal.name, animal.age, animal.food_weight);
}

int count_animals(){
    int animal_count = 0; // Initialize the count to 0
    for (int i = 0; i < ANIMALCOUNT; i++) {
        if (zoo[i].species != 0) {
            animal_count++;
            print_animal(zoo[i]);
        }
    }
    
    return animal_count;
    
}


float calculate_average_age(){
    int animal_count = count_animals();
    float sum_age;

    for(int i=0; i<ANIMALCOUNT; i++){
        sum_age += zoo[i].age;
    }

    if(animal_count > 0){
        return sum_age/ animal_count;
    }
    return 0;
}

float more_food(){
    
    for(int i=0; i< ANIMALCOUNT; i++){
        float added_weight = zoo[i].food_weight * (float)(zoo[i].species)/100;
        zoo[i].food_weight += added_weight;

    }
}


void print_zoo(){
   count_animals();  
}

int main(){
    /* Globale Arrays werden standardmaessig mit Null
    initialisiert. Fehlende Tiere würden den Wert 0 haben*/
    zoo[0] = (Animal){FISH, "Salmon", 2, 40.0};
    zoo[1] = (Animal){REPTILES, "Crocodile", 60, 300.20};
    zoo[2] = (Animal){MAMAL, "Icebear", 13, 421.1};
    zoo[3] = (Animal){BIRD, "Sparrow", 1, 0.5};

    more_food();

    print_zoo();

    

}