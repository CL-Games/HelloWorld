#include<stdio.h>
#include<math.h>

typedef int bool;


bool a = 1;
int x = 10;
int y = 9;


int main(){
    printf("Hello World\n");
    printf("%d\n",maxValue(5, 10));
    printf("%d\n",maxValue(10, 5));
    printf("%d\n",minValue(5, 10));
    printf("%d\n",minValue(10, 5));
    printf("\n%f",ceil(3.6));    
printf("\n%f",ceil(3.3));    
printf("\n%f",floor(3.6));    
printf("\n%f",floor(3.2));    
printf("\n%f",sqrt(16));    
printf("\n%f",sqrt(7));    
printf("\n%f",pow(2,4));    
printf("\n%f",pow(3,3));    
printf("\n%d\n",abs(-12));   
   if(a != 0){
       printf("true");
   }
   else{
       printf("false");
   }
   printf("\n");
   if(x > y){
       printf("true");
   }
   else{
       printf("false");
   }
   printf("\n");
   if(10 > 9){
       printf("true");
   }
   else{
       printf("false");
   }
   printf("\n");
   if(x == 10){
       printf("true");
   }
   else{
       printf("false");
   }
   printf("\n");
   if(10 == 15){
       printf("true");
   }
   else{
       printf("false");
   }
   printf("\n");
   if (x > y) {
 printf("x is greater than y");
}
printf("\n");
if (20 > 18) {
  printf("20 is greater than 18");
}
printf("\n");
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
