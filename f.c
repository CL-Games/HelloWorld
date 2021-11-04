#include <stdio.h>
int main(void)
{
    int a[6];
    int re_value, i=1;

  a[0] = 1; 
  a[1] = 2; 
  a[2] = 3;
  a[3] = 4; 
  a[4] = 5; 
  a[5] = 6;

  // a[2] = a[0]+a[4];

  re_value = a[2*2];
  re_value = re_value++;
  i = ++i;
  printf( " array = %d \n ", re_value);
  printf( " array = %d \n ", i);
    
    return 0;
}