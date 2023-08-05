#include <iostream>
#include <vector>

using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
       int rows = matrix.size();
       int cols = matrix[0].size();

       int rowIndx = 0;
       int colIndx = cols -1;

       while (rowIndx<rows && colIndx>=0)
       {
         int element = matrix[rowIndx][colIndx];
         if(element == target){
            return 1;
         }
         else if( element < target){
            rowIndx++;
         }
         else{
            colIndx--;
         }
     
       }
       
    return 0;





}
int main (){
         
}