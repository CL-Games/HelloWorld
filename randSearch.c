// C code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1
 
#include <stdio.h>
#include <stdlib.h>

#include <time.h>
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
// Driver code
int main(void)
{
    srand(time(NULL));
    int arr[99];
    int temp[99];
    int result;
    int a;
    int na = sizeof(temp) / sizeof(temp[0]);
    for (int i = 0; i < 99; i++){
    
    a=(rand()%99)+1;
    result = search(temp, na, a);
    if(result != -1){
     
     while (result != -1){
      a=(rand()%99)+1;
      result = search(temp, na, a);
     }
    }
    arr[i] = a;
    temp[i] = a;
    }
    for (int i = 0; i < 99; i++){
      printf("%d ", arr[i]);
    }
    int x = 0;
    printf("\nFind what? ");
    scanf("%d", &x);
   
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
    result = search(arr, n, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}