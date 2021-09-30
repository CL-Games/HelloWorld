#include<stdio.h>
#include<math.h>

typedef int bool;


bool a = 1;
int x = 10;
int y = 9;


int main(){
  int NumA;
  int NumB;
  char Operation;
  printf("A: ");
   scanf("%d", &NumA);
   printf("B: ");
   scanf("%d", &NumB);
   printf("Operation: ");
   scanf(" %c" ,&Operation);

   int count = 1 ;
   int num = 10;
   int guess;
   int sum = 0 ;
for (int x=2 ; x<=100 ; x+=2)
{
    if  (x % 10 == 0)          //  如果 x是10的倍數則閃過後面的 sum = sum + x; 敘述
        continue ;
    sum = sum + x;
}
printf ("總和：%d \n", sum) ;
while (1)
{
    printf ("第 %d 次猜測：\n", count) ;
    printf ("請猜測一數：") ;
    scanf ("%d", &guess) ;
    if (guess > num)
        printf ("太大！\n") ;
    else if (guess < num)
        printf ("太小！\n") ;
    else
    {
        printf ("猜中了！\n") ;
        break ;
    }
    count++ ;         //  如果猜中了則此行不會執行
}   // while loop
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
   printf("\n");
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
printf("A+B = %d\n",NumA+NumB);
printf("A-B = %d\n",NumA-NumB);
printf("A*B = %d\n",NumA*NumB);
printf("A/B = %d\n",NumA/NumB);
int i = 1;

while(i <= 100){
    switch(100 % i == 0){
        case 1:
        printf("%d\n", i);
        break;
    }
    i++;
}
i = 1;
do{
  switch(100 % i == 0){
        case 1:
        printf("%d\n", i);
        break;
    }
    i++;
}
while(i <= 100);

for (int i = 1; i<= 100; i++){
    switch(100 % i == 0){
        case 1:
        printf("%d\n", i);
        break;
    }
}

int op;
if(Operation == '+'){
    op = 0;
}
else if(Operation == '-'){
    op = 1;
}
else if(Operation == '*'){
    op = 2;
}
else if(Operation == '/'){
    op = 3;
}
else{
    op = 4;
}

switch(op){
       case 0:
        printf("Result = %d\n",NumA+NumB);
        break;
       case 1:
        printf("Result = %d\n",NumA-NumB);
        break;
       case 2:
        printf("Result = %d\n",NumA*NumB);
        break;
        case 3:
        printf("Result = %d\n",NumA/NumB);
        break;
        default:
        printf("Error: Incorrect operation");
        break;

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
