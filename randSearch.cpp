// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1
 
#include <iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <ctime>   /* 時間相關函數 */
using namespace std;
 
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
    int arr[999999];
    int temp[99999];
    int result;
    int a;
    int na = sizeof(temp) / sizeof(temp[0]);
    for (int i = 0; i < 10000; i++){
    
    a=(rand()%10000)+1;
    result = search(temp, na, a);
    if(result != -1){
     
     while (result != -1){
      a=(rand()%10000)+1;
      result = search(temp, na, a);
     }
    }
    arr[i] = a;
    temp[i] = a;
    }
    for (int i = 0; i < 10000; i++){
      cout << arr[i] << " ";
    }
    int x = 1;
    //cout << "\nFind what? ";
    //cin >> x;
   
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
     result = search(arr, n, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}