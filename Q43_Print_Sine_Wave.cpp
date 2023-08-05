#include <iostream>
#include <vector>
using namespace std;
//2D Array 
// Print first column top to bottom second column bottom to top and so on.
 
 vector <int> WavePrint(vector<vector<int>> arr, int nRows, int mCols ){
         // O(M*n)
         vector <int> v; 
         for (int i = 0; i < mCols; i++)
         {
            for (int j = 0; j < nRows; j++)
            {
                // Top to bottom 
                    if(i==0 || i%2==0)
                    {v.push_back(arr[j][i]); 
                    }

                    else{
                        // Bottom to top
                        v.push_back(arr[nRows-j-1][i]);
                    }
            }
            
         }
         return v; 
         
 }

int main (){
               vector <vector<int>> vk = {{1,2},{3,4},{5,6}};
               
              vector <int> v = WavePrint(vk,3,2);
              for(int i:v){
                cout << i << " "; 
              }

               
}