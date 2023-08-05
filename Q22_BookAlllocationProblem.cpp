#include <iostream>
using namespace std;

 // n -> Size of array/No. of books
 // m -> No. of students.

bool isPossible(int arr[], int n, int m, int mid){
      
      int StudentCount =1;
      int pageSum = 0;

      for (int i = 0; i < n; i++)
      {
         if(pageSum + arr[i]<= mid){
            pageSum += arr[i];
         }
         else{
            StudentCount++;
            if(StudentCount > m || arr[i] > mid){
                return false;
            }
            else{
                 pageSum = arr[i];
            }
            
         }
      }
      return true;
}

int AllocateBooks(int arr[], int n, int m){
    
    int s = 0; // s-> start   
    int sum =0;
     
     for (int i = 0; i < n; i++)
     {
        sum = sum + arr[i];
     }

     int e = sum;    // e-> end of binary search, max value 
     int ans = -1;
     int mid = s + (e-s)/2;

     while (s<=e)
     { 

       if(isPossible(arr,n,m,mid)){
         ans = mid;
         e = mid -1;
       }
          else{
            s = mid +1;
          }
      
        mid = s + (e-s)/2;
     }
    
     return ans;

}

int main (){
        int books[4] = {10,20,30,40};
        int minPage = AllocateBooks(books, 4 , 2);

        cout << minPage << endl;
}