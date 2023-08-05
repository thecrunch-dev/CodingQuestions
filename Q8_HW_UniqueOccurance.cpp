#include <iostream>
#include <algorithm>
using namespace std;
      int printArr(int arr[], int n){
        for (int j = 0; j<n; j++)
        {
            cout << arr[j] << " ";
        }
        
      }


      void UniqueOccurance(int arr[], int n){
         sort(arr,arr+n);
            int m=0; int a[n];
         for(int i=0;i<n;i++){
                 int count =1;
                 
            while(arr[i]==arr[i+1]){
              count++;
               i++;
                   }
             a[m] = count;
             m++;

      }  
          bool isUniqueOccurance = true;
         for (int i = 0; i < m-1; i++)
         {
            if(a[i]==a[i+1]){
                isUniqueOccurance = false;
                cout << "It doesn't have Unique Occurance.";
                
            }
         }
         
            if(isUniqueOccurance){
                cout << "It has unique Occurances of numbers." << endl;
            }
      }


int main (){
            int arr[6] = {1,2,2,1,1,3};

            UniqueOccurance(arr,6);

}