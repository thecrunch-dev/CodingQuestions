 #include <iostream>
 using namespace std;

 // Approach Time complexity => O(n)
   void sort012(int a[], int n)
    { 
        int count =0;
      for(int i=0 ; i<n; i++){
          
          if(a[i]==0){
              swap(a[i],a[count++]);
          }
      }
       for(int i=count ; i<n; i++){
          
          if(a[i]==1){
              swap(a[i],a[count++]);
          }      
      }
      }

 int main (){
          int a[6] ={1,0,1,2,2,0}; 
          sort012(a,6);
          for(int i:a){
            cout << i << " ";  
          }
 }
 
 
 