#include<stdio.h>

int main(){
    int times = 5;
    for(int i = 1; i <= times; i++){
     int aa = 1 + ((i-1)*2);
     for(int w = times - i; w > 0; w--){
       printf("  ");
     }
     for(int j = 0; j < aa; j++){
        printf("* ");
      }
      printf("\n");
    }

    return 0;
}