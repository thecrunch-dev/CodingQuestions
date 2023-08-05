#include <iostream>
#include<algorithm>
using namespace std;

void moveZeros(int arr[], int n){

    int i =0;
    for (int j = 0; j < n; j++)
    {
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    
}

int main (){
      int arr[6] = {0,1,3,0,0,12};
      moveZeros(arr,6);
      for(int i:arr){
        cout << i << " ";
      }
}