#include <iostream>
#include<algorithm>
using namespace std;

bool isPossible(int arr[], int size, int k, int mid){
   
   int cowCount =1;

   int lastPos = arr[0];
   for (int i = 0; i < size; i++)
   {
     if(arr[i]-lastPos>=mid){
        cowCount++;
        if(cowCount==k){
            return true;
        }
        lastPos = arr[i]; 
     }
   }
   
 return false;

}
int aggressiveCows(int arr[],int size, int k){
   
    sort(arr[0],size+1);

    int s =0;
    int maxi = -1;

    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if(isPossible(arr, size, k, mid)){
            ans = mid;
            s = mid +1;
        }

        else{
            e = mid -1;
        }
         mid = e + (e-s)/2;
    }
   
     return ans;

}




int main (){
   
   int arr[5] = {4,2,1,3,6};
   int size =5;
   int k =2; // cows

   int maxDist = aggressiveCows(arr,5,2);
   cout << maxDist;

}