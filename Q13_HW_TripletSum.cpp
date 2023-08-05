#include <iostream>
using namespace std;
     
    void TripletSum(int arr[], int n, int sum){
            for (int i = 0; i < n; i++)
            {
                for (int j = i+1; j < n; j++)
                {
                    for (int k = j+1; k < n; k++)
                    {
                        if(arr[i]+arr[j]+arr[k]==sum){
                            cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                        }
                    }
                    
                }
                
            }
            
    } 

int main (){
          int arr[6] = { 1,2,3,4,5,6};
         
          int sum = 12;
           TripletSum(arr,6,sum);
}