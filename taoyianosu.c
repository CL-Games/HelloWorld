#include<stdio.h>


int main(){
    int a;
    int b;

    scanf("%d", &a);
    if(a <= 0){
        printf("Incorrect Number at A\n");
        exit(0);
    }

    scanf("%d", &b);
    if(a <= 0){
        printf("Incorrect Number at B\n");
        exit(0);
    }
    int al = a;
    int bl = b;
    while(al % 2 == 0){
        al /= 2;
    }
    while(bl % 2 == 0){
        bl /= 2;
    }
     printf("A: %d\n", al);
     printf("B: %d\n", bl);
}