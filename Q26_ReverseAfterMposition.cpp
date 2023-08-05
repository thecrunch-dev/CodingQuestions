#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

  /* Reverse An Array After M positions : 
  (Consider zero based Indexing)
     arr = {1,2,3,4,5,6};
     M = 3 
     output: {1,2,3,4,6,5 }
 */

 void ReverseAfterM(int arr[], int n, int M){
            
            int s = M+1;
            int e = n-1;
         
         while (s<=e)
         {
             swap(arr[s],arr[e]);
             s++;
             e--;
         }       
          
          
 }

int main (){
            
            int arr[] = {1,2,3,4,5,6};
            int M=2;
            cout << "Before reverse after M Position: " << endl; 
             for(int i:arr){
                cout << i << " "; 
            }
            
            cout << endl; 
           
            ReverseAfterM(arr,6,2);

            cout << "Reverse after M Position: " << endl; 
            for(int i:arr){
                cout << i << " "; 
            }

}