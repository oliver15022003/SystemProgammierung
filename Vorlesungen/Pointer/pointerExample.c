#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age; 
};

/* veraendert das Person Struct obwohl dieses nicht im Scope 
der Funktion liegt 
der Pointer des Structs ist jedoch im Scope*/
void updateStruct(struct Person *p, int age, char name[30]) {
    p->age = age;
    strcpy(p->name, name);
    /*
    Output:
    Name: Linus Torvalds  Age: 40
    Name: Dennis Ritchie  Age: 100
    */
}

void updateStructWithoutPointers(struct Person p, int age, char name[30]) {
    p.age = age;
    strcpy(p.name, name);

    /* 
    Output:
    Name: Linus Torvalds  Age: 40
    Name: Linus Torvalds  Age: 40

    Conclusion: Klappt nicht!
    man möchte nicht den Parameter verändern sondern ein struct
    welches als Parameter übergeben wird soll verändert werden
    */
}

int main() {
    struct Person me;
    me.age = 40;
    strcpy(me.name, "Linus Torvalds");
    printf("Name: %s  Age: %d\n",me.name, me.age);
    updateStruct(&me, 100, "Dennis Ritchie");
    //updateStructWithoutPointers(me, 100, "Dennis Ritchie");
    printf("Name: %s  Age: %d\n",me.name, me.age);
}