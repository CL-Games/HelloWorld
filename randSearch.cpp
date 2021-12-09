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
    int temp2[99999];
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
    int x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int nb = sizeof(temp2) / sizeof(temp2[0]);
    cout << "\n";
    for(int i = 0; i < 100; i++){
    x = (rand()%10000)+1;
    result = search(temp2, nb, x);
    if(result != -1){
     
     while (result != -1){
      x=(rand()%10000)+1;
      result = search(temp, nb, x);
     }
    }
    temp2[i] = x;
    //cout << "\nFind what? ";
    //cin >> x;
   
   
    // Function call
    cout << i << ": ";
    cout << x << ": ";
     result = search(arr, n, x);
    (result == -1)
        ? cout << "Element is not present in array" << "\n"
        : cout << "Element is present at index " << result << "\n";
    }
    return 0;
}