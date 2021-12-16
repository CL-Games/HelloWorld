#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main(){
   srand(time(NULL));
   int data_array[10000];
   int a = 3;
   int n = sizeof(data_array) / sizeof(data_array[0]);

   int temp;
   temp = (rand()%a)+1;
   data_array[0] = temp; 

   for (int i = 1; i < n; i++){
    temp = (rand()%a)+data_array[i - 1] + 1;
    data_array[i] = temp;  

   }

   //the actual search
   for(int i =0; i < 1000; i++){
      int x = data_array[(rand()%n)];
      int result = search(data_array, n, x);
    }


   return 0;
}