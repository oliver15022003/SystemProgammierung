/* ====== STUDENT_H ======*/

#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <stdlib.h>

typedef enum{
    IFM,
    ELM,
    ET,
    MB,
    MED
}Enrolled;

typedef struct{
    char name[30];
    Enrolled enrolled;
    unsigned int cps;

}Student;

void printStudent(Student student);


#endif