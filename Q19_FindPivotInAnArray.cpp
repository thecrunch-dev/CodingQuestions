#include <iostream>
using namespace std;

int getPivot(int arr[], int size){
    int s =0;
    int e =size -1 ;
    int mid = s + (e-s)/2;
 
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s = mid +1;
        }
        else if (arr[mid]<arr[0]){
             e = mid;
        }
           mid = s + (e-s)/2;
        
    }
    return s;
}



int main (){
        int arr[7] = {7,9,1,2,3,4,5};
        int pivot = getPivot(arr,7);
        cout << "The pivot index in the array is "<<pivot;
}