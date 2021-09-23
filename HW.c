#include<stdio.h>

int main(){
    printf("Hello World\n");
    printf("%d\n",maxValue(5, 10));
    printf("%d\n",maxValue(10, 5));
    printf("%d\n",minValue(5, 10));
    printf("%d\n",minValue(10, 5));
    return 0;
}
int maxValue(int a, int b){
    if(a > b){
        return a;
    }
    else{
      return b;
    }
}
int minValue(int a, int b){
    if(a < b){
        return a;
    }
    else{
      return b;
    }
}