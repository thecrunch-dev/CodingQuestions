#include <iostream>
using namespace std;
// Given an array with odd no. of 2m + 1 size, and has m elements which appear twice, and 1 unique element. 
//Find the unique element

   /*  XOR 
   
       a^a = 0 
       0^a = a
       for unique element in arr = {2,3,1,6,3,6,2}
       now 2^3^1^6^3^6^2 = (2^2)^(3^3)^(6^6)^1 = 0^0^0^1 = 1 (unique element)

   */  

 int findunique(int arr[], int size){
  int unique =0;
           for (int i = 0; i < size; i++)
           {
            unique = unique^arr[i];
           }
           return unique;
 }

int main (){
           int arr[7] ={2,1,1,2,3,8,8};
           int unique = findunique(arr,7);
           cout << "The unique element in the array is " << unique;

}