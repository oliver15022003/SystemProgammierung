/* ====== DOUBLELINKEDLIST_C ====== */

#include "doubleLinkedList.h"
#include "student.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct ListNode* createNode(Student data) {
    /* Es wird dynamisch Speicherplatz fuer einen neuen Knoten
    alloziert. Malloc reserviert Speicherplatz im Heap-Speicher fuerü
    die Groesse eines Struct ListNode*/
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    /* Wenn newNode nicht den Wert 0 hat bedeutet das das genuegend 
    Speicherplatz reserviert wurde*/
    if (newNode) {
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
    }
    return newNode;
}

/* 
ListNode **  head ist ein Pointer auf den Pointer der 
auf den Anfang der linked list zeigt 
*/
void insertAtBeginning(struct ListNode** head, Student data) {
    /* neuer Knoten */
    struct ListNode* newNode = createNode(data);
    if (newNode) {
        /* der neue Knoten zeigt jetzt auf das bisherige erste 
        Element der Liste */
        newNode->next = *head;
        if (*head) {
            /* der prev Pointer des bisherigen ersten Elements 
            wird auf den neuen Knoten gesetzt
            dadurch ist der neue Knoten das erste Element der Liste
            */
            (*head)->prev = newNode;
        }
        *head = newNode;
    }
}

void insertAtEnd(struct ListNode** head, Student data) {
    struct ListNode* newNode = createNode(data);
    if (newNode) {
        if (*head == NULL) {
            *head = newNode;
        } else {
            struct ListNode* current = *head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }
}

void printList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current) {
        
        printStudent(current->data);
        printf("        ▲  \n");
        printf("        |\n");
        printf("        ▼  \n");
        current = current->next;
    }
    
    printf("NULL\n");
}

/*Funktion zum loeschen einer gesamten Liste*/

void deleteList(struct ListNode** head) {
    struct ListNode* current = *head;
    while (current) {
        struct ListNode* temp = current;
        current = current->next;
        free(temp);
    }
    *head = NULL;
}

/* Funktion zum loeschen von einem Knoten */
void deleteNode(struct ListNode** head, Student studi) {
   struct ListNode* current = *head;
   struct ListNode* previous = NULL;
   
   while (current) {
       if (strcmp(current->data.name, studi.name) == 0) {
           // Der zu löschende Knoten wurde gefunden
           if (previous) {
               // Der Knoten ist nicht der erste in der Liste
               previous->next = current->next;
               if (current->next) {
                   current->next->prev = previous;
               }
           } else {
               // Der zu löschende Knoten ist der erste in der Liste
               *head = current->next;
               if (current->next) {
                   current->next->prev = NULL;
               }
           }
           free(current);
           return; // Beende die Schleife, da der Knoten gefunden und gelöscht wurde
       }
       previous = current;
       current = current->next;
   }
}
/* ListNode* head ist der Zeiger auf den Anfang der doubleLinkedList*/
struct ListNode* traverseList(struct ListNode** head, Enrolled type){
     //neue leere Liste
     struct ListNode* myList = NULL;
     /*ein Pointer current wird auf den Anfang der urspruenglichen Liste
       gesetzt um sie zu durchlaufen */
     struct ListNode* current = *head;
     //solange es Elemente in der Liste gibt wird die Schleife ausgefuehrt
     while (current) {
        if(current->data.enrolled == type){
            Student student = current->data;
            insertAtEnd(&myList, student);
        }
        current = current->next;
     }

     return myList;
}

