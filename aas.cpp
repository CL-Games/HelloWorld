#include<iostream>
#include <bits/stdc++.h>
using namespace std;

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
   cout << n << "\n";
   cout << "\n";
   for (int i = 0; i < n; i++){
       cout << data_array[i] << "\n";
   }
   cout << "\n";
   return 0;
}