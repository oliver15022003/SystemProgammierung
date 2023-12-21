/* ====== DOUBLELINKEDLIST_h ======*/

#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

#include "student.h"

/* 

In einer doubleLinkedList hat jeder Knoten Verweise auf den naechsten und 
vorherigen Knoten.

Listnode* next ist ein Pointer auf den naechsten Knoten in der Liste
Listnode* prev ist ein Pointer auf den vorherigen Knoten in der Liste 

*/
struct ListNode {
    Student data;
    struct ListNode* next;
    struct ListNode* prev;
};

struct ListNode* createNode(Student data);
void insertAtBeginning(struct ListNode** head, Student data);
void insertAtEnd(struct ListNode** head, Student data);
void printList(struct ListNode* head);
void deleteList(struct ListNode** head);
void deleteNode(struct ListNode** head, Student studi );
struct ListNode* traverseList(struct ListNode** head, Enrolled type );

#endif
