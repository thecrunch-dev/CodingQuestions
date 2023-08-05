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
 pair<int,int> firstandLastPosition(int arr[], int size, int key){
      pair<int,int> p;
      p.first = firstOccurance(arr,size,key);
      p.second = lastOccurance(arr,size,key);
     
     return p;
    
 }
int main (){
       int even[11] ={1,2,3,3,3,3,3,3,3,3,5};
       pair<int,int> p = firstandLastPosition(even,11,3);
       cout << "First Occurance and last Occurance of 3 is at Index " << p.first <<" and " <<p.second << endl;
      
}