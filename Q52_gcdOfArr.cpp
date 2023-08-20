

    #include <iostream>
    #include <vector>
    using namespace std;
    int gcd(int a, int b){
          while(a!=b && a > 0 && b > 0){
              if(a>b){
                  a = a-b;
              }
              else{
                  b = b-a; 
              }
          }
          return a; 
     }

    
   

    int findGCD(vector<int>& nums) {
         
         int maxi = INT32_MIN; 
         int mini = INT32_MAX; 

         for(int i=0; i < nums.size(); i++){
             if(nums[i]> maxi){
                 maxi = nums[i]; 
             }
         }

          for(int i=0; i < nums.size(); i++){
             if(nums[i]< mini){
                 mini = nums[i]; 
                
             }
         }
        
         int gc  =gcd(maxi, mini); 
         return gc; 



    }
    int main (){
              vector <int> v = {2,3,4,10}; 
             cout << " " <<  findGCD(v); 

    }