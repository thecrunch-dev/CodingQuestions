#include <iostream>
#include <vector>
using namespace std;

vector<int> sprialOrder(vector<vector<int>> & matrix){
     
     vector <int> ans;
      int rows = matrix.size();
      int cols = matrix[0].size();

      int total = rows*cols;
      int count =0;
 
    // Index Initialization 

      int startingRow = 0;
      int endingRow = rows -1;
      int startingCol = 0;
      int endingCol = cols -1;
      while (count < total)
      {
           
           //print starting row
           for (int index = startingCol; count< total && index <=endingCol; index++)
           {
             ans.push_back(matrix[startingRow][index]);
             count++;
           }
           startingRow++;
           
           //Print Ending column
           for (int index = startingRow;  count< total && index <=endingRow; index++)
           {
            ans.push_back(matrix[index][endingCol]);
            count++;
           }
           endingCol--;
           
           //Print Ending row
           for (int index = endingCol;  count< total && index >= startingCol ; index--)
           {
            ans.push_back(matrix[endingRow][index]);
            count++;
           }
           endingRow--;
           
           //Print Starting Column

             for (int index = endingRow;  count< total && index >= startingRow ; index--)
           {
            ans.push_back(matrix[index][startingCol]);
            count++;
           }
           startingCol++;
      
      }
      return ans;
}




int main (){

}