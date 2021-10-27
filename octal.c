#include<stdio.h>


int main(){
    int a;
    int number[10], i , j;
    printf("Input a number: ");
    scanf("%d", &a);
    printf("Result: %o", a);
    printf("\n");
    for(i = 0; a >0; i++){
    number[i] = a % 8;
    a /= 8;
}

   for(j = i - 1; j>=0; j--){
      printf("%d", number[j]); 
   }
   printf("\n");
  return 0;
}