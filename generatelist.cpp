#include<iostream>
#include <bits/stdc++.h>
using namespace std;
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
int main(){
   srand(time(NULL));
   int data_array[10000];
   int a = 100000;
   int n = sizeof(data_array) / sizeof(data_array[0]);

   int temp;
   temp = (rand()%a)+1;
   data_array[0] = temp; 
    cout<<"int arr[] = {";
   for (int i = 1; i < n; i++){
    temp = (rand()%a);
    data_array[i] = temp;  
    cout<<temp<<",";

   }
   cout<<"};";


   return 0;
}