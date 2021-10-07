#include<stdio.h>
void swapNums(int *x, int *y) {
  printf( " x = %d \n",*x);
  printf("  y = %d \n", *y);
  int z;
  z = *x;
  *x = *y;
  *y = z;
  printf( " x = %d \n",*x);
  printf("  y = %d \n", *y);
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  //cout << "Before swap: " << "\n";
  printf(" before swap %d , %d \n", firstNum,secondNum);
  //cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  printf(" %d , %d \n ",&firstNum, &secondNum);
  swapNums(&firstNum, &secondNum);
  printf(" %d , %d \n ",&firstNum, &secondNum);
  //cout << "After swap: " << "\n";
  //cout << firstNum << secondNum << "\n";
  printf(" after swap %d , %d \n ", firstNum,secondNum);

  return 0;
}