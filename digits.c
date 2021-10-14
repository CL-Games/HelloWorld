#include <limits.h>
#include <stdio.h>

int
main (void)
{
  unsigned int score = 123456;   // Works for score in [0, UINT_MAX]
  unsigned int backup = score;
  printf ("score via printf:     %u\n", score);   // For validation

  printf ("score digit by digit: ");
  unsigned int div = 1;
  unsigned int digit_count = 1;
  while ( div <= score / 10 ) {
    digit_count++;
    div *= 10;
  }
  while ( digit_count > 0 ) {
    printf ("%d", score / div);
    score %= div;
    div /= 10;
    digit_count--;
  }
  printf ("\n");
  
 score = backup;
  unsigned int count = 0;
  unsigned int n = score;
  while (n != 0)
  {
    n /= 10;
    count++;
  }
  unsigned int numberArray[count];
  if(count!=0){
   

   count = 0;    
   n = score;

   while (n != 0){
       numberArray[count] = n % 10;
       n /= 10;
       count++;
   }
   
}
   printf("score with digits shifted: ");
   for(int i = 0; i < count; i++){
     printf("%d", numberArray[i]);
   }
   printf("\n");
  return 0;
}