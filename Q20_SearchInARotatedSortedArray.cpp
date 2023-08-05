#include <iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while (s<e)         
    {
        if(arr[mid]>=arr[0]){
            s = mid+1;  
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s; 
    
}

int BinarySearch(int arr[], int s, int e,int key){
    // int s =0;
    // int e = n-1;
    int mid = s + (e-s)/2;
    
    while (s<=e)
    {
        if(arr[mid]== key){
            return mid;
       
        }
        else if(arr[mid]<key){
        
            s = mid +1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

 int SearchElementInSortedRotatedArray(int arr[], int n, int key){
    int pivot = getPivot(arr,n);
    int e = n-1;
   
    int Index;
    if(arr[pivot]<= key <= arr[e]){
      // Binary Search on second line 
       Index =  BinarySearch(arr, pivot, n-1, key);
 }
 else{
    // Binary Search on first line
     Index = BinarySearch(arr, 0, pivot, key);
 }
   return Index;
 }

int main (){
   int arr[5] = {7,9,1,2,3};
   
    int Index =  SearchElementInSortedRotatedArray(arr,5,3);
    cout << "The key 3 is present in the array at the Index = " << Index;
 
}