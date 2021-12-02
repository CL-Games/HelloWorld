// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;
 
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}
 
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
    result = binarySearch(temp, 0, na - 1, a);
    if(result != -1){
     
     while (result != -1){
      a=(rand()%99)+1;
      result = binarySearch(temp, 0, na - 1, a);
     }
    }
    arr[i] = a;
    temp[i] = a;
    }
    for (int i = 0; i < 99; i++){
      cout << arr[i] << " ";
    }
    int x = 0;
    cout << "\nFind what? ";
    cin >> x;
   
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
     result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}