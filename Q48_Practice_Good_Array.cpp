#include <iostream>
#include <vector>
using namespace std;
 bool isGood(vector<int>& nums) {

        int x =0; 
        for(int i =1; i<nums.size(); i++ ){
            x = x^nums[i]; 
        }

        for(int i=1; i<nums.size()-2;i++){
            x =x ^i;
        }

        if(x==0){
            return true;
        }
        else{
            return false; 
        }
    }
int main (){

}