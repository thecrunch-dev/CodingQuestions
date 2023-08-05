#include <iostream>
using namespace std;
int main (){
     
      int a =10;
      int n = a;
      int mask =0;
      int ans = 0;
      if(a==0){
           cout << 1;
      }
      while(n!=0){
               mask = mask <<1;
               mask = mask | 1;
               n=n >> 1;
      }
     
     ans = ~a & mask;
     cout << ans << endl;
 
}