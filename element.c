#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  double *data;
  printf("Enter the total number of elements: ");
  scanf("%d", &n);
  
  // Allocating memory for n elements
  data = (double *)calloc(n, sizeof(double));
  
  if (data == NULL) {
      printf("Error!!! memory not allocated.");
      exit(0);
  }
  // Storing numbers entered by the user.
  for (int i = 0; i < n; ++i) {
      printf("Enter number%d: ", i + 1);
      scanf("%lf", data + i);
}
}