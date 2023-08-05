#include <iostream>
#include <vector>
using namespace std;

// Rotate the array by k positions

void rotate(vector<int> &nums, int k){
         // create a temp vector 
         vector <int> temp(nums.size());

         // fill the temp vector with the rotated elements of nums 
         for (int i = 0; i < nums.size(); i++)
         {
            temp[(i+k)%nums.size()] = nums[i];
         }

        // copy the temp vector into original vector 
         nums = temp;  
         
   }


int main (){
        vector <int> nums = {1,2,3,4,5,6,7};
        int k=3;
        rotate(nums, k); 

        for(int i:nums){
            cout << i << " ";
        }
}