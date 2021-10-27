#include<stdio.h>


int main(){
    int a;
    int we;
    char number[50], i , j;
    printf("Input a number: ");
    scanf("%d", &a);
    printf("Choose which type to translate: (16: Hex, 8: Octal) ");
    while(we != 16 && we != 8){
      scanf("%d", &we);
    }
    if(we == 16){
      printf("Result: %x", a);  
    }
    else if(we == 8){
        printf("Result: %o", a); 
    }
    printf("\n");
  return 0;
}