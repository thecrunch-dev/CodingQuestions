#include <iostream>
using namespace std;
 

 int PeaKIndex(int arr[], int size){
     int s =0;
     int e = size -1;
     int mid = s + ((e-s)/2);

    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
        {
            s = mid+1;
       
        }
        else{
            e = mid;
            
        }
        mid = s +((e-s)/2);
      
    }
   
    return mid;

 }



int main (){
       int arr[5] = {3,5,4,2,0};
       int peak = PeaKIndex(arr,5);
       cout << "Peak Index of array is " << peak << endl; 
}