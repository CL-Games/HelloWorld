#include<stdio.h>

int main(){
    int a = 60;
    for(int i = 1; i <= a; i++){
      if(a % i == 0){
          printf("%d ", i);
      }
    }
    printf("\n");
}