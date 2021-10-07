#include<stdio.h>
#include<math.h>

typedef int bool;


bool a = 1;
int x = 10;
int y = 9;

int myNum[] = {1,2,3,4,5};


int main(){
  int NumA;
  int NumB;
  int num12 = 10;
  int num23 = 20;
  int *num34 = 10;
  int *num45 = 20;
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
   bca(10, 121);
    printf("\n");
    printf("%d\n", num12);
    printf("%d\n", num23);
    printf("\n");
    swapNums(&num12, &num23);
    printf("num12: %d\n", num12);
    printf("num23: %d\n", num23);
    printf("\n");
    printf("num12: 0x%x\n", &num12);
    printf("num23: 0x%x\n", &num23);

    printf("num34: %d\n", num34);
    printf("num45: %d\n", num45);

    for (int i = 0; i < sizeof(myNum) / sizeof(myNum[0]); i++){
        printf("%d\n", myNum[i]);
    }
    printf("sizeof of array: %d\n", (int) sizeof(myNum));
    printSizeOf(myNum);

    printf("Length of array: %d\n", (int)( sizeof(myNum) / sizeof(myNum[0]) ));
    printLength(myNum);
    return 0;
}
void printSizeOf(int intArray[])
{
    printf("sizeof of parameter: %d\n", (int) sizeof(intArray));
}

void printLength(int intArray[])
{
    printf("Length of parameter: %d\n", (int)( sizeof(intArray) / sizeof(intArray[0]) ));
}
void bca(int abc, int def){
    printf("OK\n");
    printf("%d\n", abc);
    printf("%d\n", def);
}
int maxValue(int a, int b){
    if(a > b){
        return a;
    }
    else{
      return b;
    }
}
void swapNums(int *x, int *y) {
  int z;
  z = *x;
  *x = *y;
  *y = z;
}
int minValue(int a, int b){
    if(a < b){
        return a;
    }
    else{
      return b;
    }
} 
