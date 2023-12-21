/* ====== STUDENT_C ======*/

#include "student.h"
#include <stdio.h> 


/* Funktionen der Studenten Datenstruktur*/

void printStudent(Student student){
    const char* courses[] = {"IFM", "ELM", "ET", "MB", "MED"};
    
    printf("\x1b[33m"); // Farbe auf Orange setzenc
    printf("**********************\n");
    printf("\x1b[0m"); // Farbe wieder auf Default
    
    printf("Name: %s\n", student.name);
    printf("Enrolled: %s\n", courses[student.enrolled]);
    printf("Cps: %d\n", student.cps);
    
    printf("\x1b[33m"); // Farbe auf Orange setzen
    printf("**********************\n");
    printf("\x1b[0m"); // Farbe wieder auf Default

}