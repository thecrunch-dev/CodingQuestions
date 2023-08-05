#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n){
   
   vector<bool> prime(n+1,true);

   prime[0] = prime[1] = false;
int cnt =0; 

   for (int i = 2; i < n; i++)
   {
            if(prime[i]){
                   cnt++;
                   for (int j = 2*i; j < n; j=i+j)
                   {
                      prime[j] = false; 
                   }
                   
            }
   }
   
     return cnt; 

}



int main (){
         int n = 40;
       int primes = countPrimes(n); 
       cout << " total numbers between n " << primes; 



}