#include <iostream>
#include <vector>

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){

    
          int n = nums1.size();
          int m = nums2.size();
            int i=0, j=0;

          vector<int> v = {0}; 
        while(i<n && j <m){
            if(nums1[i]<=nums2[j]){
                 v.push_back(nums1[i++]);
            }
             else{
                 v.push_back(nums2[j++]);
            }
        }

        while(j<m){
                 v.push_back(nums2[j++]); 
            }
            
            while(i<n){
                 v.push_back(nums1[i++]);
            }

            // Median
            int l = m+n-1;  // Number of elements. 
            double c=0;
            if((l+1)&1){ 
                  double d = v[(l)/2 + 1];
                  return d; 
            }

            else{
                 int m1 = v[(l)/2 + 1];
                 int m2 = v[(l-1)/2 + 2];
               double d= ((double)m1+ (double)m2)/2; 
               return d; 
            }
       
       
    };

using namespace std;
int main (){
         vector<int> nums1;
         vector<int> nums2; 
         
}