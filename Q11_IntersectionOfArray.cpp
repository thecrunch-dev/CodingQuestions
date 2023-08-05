#include <iostream>
using namespace std;

void Intersection(int arr1[], int arr1size, int arr2[], int arr2size){

    // M1 
    /*for (int i = 0; i < arr1size; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < arr2size; j++)
        {   

           if(arr2[j]>element){
             break;
           }

            if(arr2[j]==element){
              cout << element << " ";
              arr2[j] = INT32_MIN;
              break;
            }
        }
        
    }*/
  
  // M2 => 2 pointer approach
  int i =0, j=0;
  int ans;
  while(i<arr1size && j<arr2size){
      if(arr1[i]=arr2[j]){
        cout << arr1[j] << " ";
         i++;
         j++;
         continue;
      }
     
    else if(arr1[i]>arr2[j]){
        j++;
        continue;
     }
    
    if(arr1[i]<arr2[j]){
        i++;
        continue;
    }

  
  }






    
}



int main (){
       int arr1[6] = {1,2,3,4,5,6};
       int arr2[3] ={3,4,5};
       Intersection(arr1,6,arr2,3);
}