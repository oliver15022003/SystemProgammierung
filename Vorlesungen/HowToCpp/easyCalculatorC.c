#include <stdio.h>
#include <string.h>

int main(void){
  while(1){
    int a;
    int b;
    int solution;
    char word[6];
    printf("Enter Input: \n");
    scanf("%s", &word);

    if(strcmp(word, "sum")== 0){
      printf("Number1: \n");
      scanf("%d", &a);
      printf("Number2: \n");
      scanf("%d", &b);

    }
    if(strcmp(word, "end")== 0){
      printf("Ending the Game!\n");
      return 0;
    }
    if(strcmp(word, "print")== 0){
      printf("The Solution Is: %d\n", a+b);
    }
    else{
      printf("The input is not a known Command \n");
    }
  }
  return 0;
}