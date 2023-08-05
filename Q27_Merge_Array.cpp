#include <iostream>
#include <vector> 
using namespace std;
 
 void merge( vector <int>& nums1, int n, vector<int>& nums2, int m){
       
       int i =0;
       int k = n-m;
       while (i<m)
       { 
         nums1[k+i]= nums2[i];
         i++;
       }
       nums2.clear();
       
 }




int main (){
            vector <int> nums1 ={1,2,3,0,0,0};
            vector < int> nums2={4,5,6};
            
             int n =6;
             int m = 3;
           merge(nums1, 6, nums2, 3 ); 
                
            for (int i = 0; i <n; i++)
            {
                cout << nums1[i] << " ";
            }
           
}