#include <iostream>
#include <utility>
using namespace std;

 int firstOccurance(int arr[], int size, int key){
    int s = 0;
    int e = size -1;
    int mid = s + (e-s)/2 ; 
       int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
          ans = mid;
          e = mid -1;

        }
        else if(arr[mid]>key){ // left mein jao
             e = mid -1;
        }
        else if (arr[mid]<key){  // right mein jao  
            s = mid +1;
        }

       mid = s + (e-s)/2;

    }
    return ans;
 }

int lastOccurance(int arr[], int size, int key){
    int s = 0;
    int e = size -1;
    int mid = s + (e-s)/2 ; 
       int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
          ans = mid;
          s = mid +1;

        }
        else if(arr[mid]>key){ // left mein jao
             e = mid -1;
        }
        else if (arr[mid]<key){  // right mein jao  
            s = mid +1;
        }

       mid = s + (e-s)/2;

    }
    return ans;
 }

 int TotaNoOfOccuranc(int arr[], int size, int key){
     int firstOcc = firstOccurance(arr,size,key);
     int lastOcc = lastOccurance(arr, size,key);
     int totalOccurance = (lastOcc - firstOcc) + 1;
     return totalOccurance;
 }

 int main (){
       int even[11] ={1,2,3,3,3,3,3,3,3,3,5};
       cout << "The total Number of occurance of 3 in the array is "<< TotaNoOfOccuranc(even,11,3) << endl;
}