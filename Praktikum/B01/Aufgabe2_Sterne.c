#include <stdio.h>

int main(){
    
    int num;
    int i;
    int j;
    int k;
    int l;
    int o;
    int p;
    int counter;
    int spaces;
    int staramount;

    printf("Bitte geben Sie eine Zahl ein \n");
    scanf("%d", &num);
    counter = 1;
    spaces  = num-1;
    staramount = 0;
   
 
    
    
    /*  Teil 1: */
    printf("erster Teil: \n");
    for(i= 0; i < num; i++){
        printf("*");
    }
    
    /*  Teil 2: */
    printf("\nzweiter Teil: \n");
 
    for(j= 0; j < num; j++){
        for(k= 0; k < counter; k++){
            printf("*");
        }
        printf("\n");
        counter ++;
    }
    counter = 1;

    /*  Teil 3: */
    printf("\ndritter Teil: \n");

   
    for(l= 0; l < num; l++){
        for(o= 0; o< spaces; o++){
            printf(" ");
        }
        
        for(p= 0; p < counter + staramount ;p++){
            printf("*");
        }
        staramount++;
        printf("\n");
        counter ++;
        spaces --;
    }
    counter = 1;
    return 0;
}