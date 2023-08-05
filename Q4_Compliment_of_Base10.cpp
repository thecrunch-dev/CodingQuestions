#include <iostream>
#include <math.h>
using namespace std;
int main (){
     int a = 15;
  int i =0;
  int ans =0;

    while (a!=0)
    {
      int bit = a&1;
      ans= (bit*pow(10,i))+ ans;
      a= a>>1;
      i++;
       
    }
  
    int m =0;
    int arrs[23];
    while (ans!=0)
    { 
      int k =  ans%10;
    arrs[m] = k;
      ans = ans/10;
      m++;
    }
    
   int res =0;
   int j =0;
        while (j<m)
        {
          if(arrs[j]==0){
            arrs[j]=1;
          }
          if(arrs[j]==1){
            arrs[j]=0;
                      }
                      j++;
        }
        

    // int j =0;
    //   while(ans!=0){
    //         int digit = ans%10;
    //         if(digit ==0){
    //             res = 1*pow(10, j);
    //         }
    //         if(digit ==1){
    //             res = 10*ans;
    //         }
           
    //         ans = ans/10;
    //         j++;
    //   }
    // System.out.println(res);
    int finres =0;
     int k =0;
     int bit =0;
    while(res!=0){
        bit = res%10;
        
          finres = bit*pow(2,k) + finres;
        
      
      res = res/10;
      k++;
    }
      
  cout << finres;

  }
