/* ====== MAIN_C ====== */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
#include "doubleLinkedList.h"


int main(){
    Student student1;
    strcpy(student1.name, "Alan Turing");
    student1.enrolled = IFM;
    student1.cps = 60;

    Student student2;
    strcpy(student2.name, "Ada Lovelace");
    student2.enrolled = IFM;
    student2.cps = 160;

    Student student3;
    strcpy(student3.name, "ELON MUSK ");
    student3.enrolled = IFM;
    student3.cps = 80;

    Student student4;
    strcpy(student4.name, "Bjarne Stroustrup");
    student4.enrolled = ET;
    student4.cps = 180;

    Student student5;
    strcpy(student5.name, "Igneborg Rapoport");
    student5.enrolled = MED;
    student5.cps = 120;

    Student student6;
    strcpy(student6.name, "Robert Bosch");
    student6.enrolled = MB;
    student6.cps = 10;

    struct ListNode* myList = NULL;
    struct ListNode* IFMList = NULL;

    insertAtBeginning(&myList, student1);
    insertAtBeginning(&myList, student2);
    insertAtBeginning(&myList, student3);

   
    insertAtEnd(&myList, student4);
    insertAtEnd(&myList, student5);
    insertAtEnd(&myList, student6);

    

    printf("Double Linked List:\n\n");
    printList(myList);

   /* printf("IFM Linked List:\n\n");
    IFMList =  traverseList(myList, IFM);
    printList(IFMList);
    */
    deleteNode(&myList,student2);

    printf("Double Linked List after changes:\n\n");
    printList(myList);


    deleteList(&myList);
    deleteList(&IFMList);

    return EXIT_SUCCESS;
}
