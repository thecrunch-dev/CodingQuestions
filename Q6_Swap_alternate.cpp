#include <iostream>
using namespace std;

   // [1,2,3,4,5] => [2,1,4,3,5]
  //  [ 1,2,3,4,5,6] => [2,1,4,3,6,5]


   int swapalter(int arr[], int size){
      int start = 0;
      int end = 1;
     while (end < size)
     {
        swap(arr[start],arr[end]);
        start += 2;
        end +=2;
     }
     
    

   }


int main (){
   
   int arr[5]= { 1,2,3,4,5};
   swapalter(arr,5);

   for (int i = 0; i <5;i++)
   {
    cout << arr[i] << " ";
   }
   

}