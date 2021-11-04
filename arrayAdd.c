#include<stdio.h>

#include <stdio.h>
#include <stdlib.h>



int main() {
   long a[3][4];

  for (int i=0; i<3;i++)
      for (int j=0; j<4;j++)
          a[i][j]=12;
   for (int i=0; i<3;i++){
      for (int j=0; j<4;j++){
      printf("%d. ", &a[i][j]);}
      printf("\n");
   }
}