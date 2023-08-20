#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

      

//Write your totalPrime function here
int totalPrime(int s, int e) {
    
    vector <bool> prime(e+1,true);
       prime[0] = prime[1] = false;
       
       for(int i=2; i<=e; i++){
           if(prime[i]){
               for(int j=2*i;j<=e;j = j+i ){
                   prime[j] = false; 
               }
           }
       }
             int ct =0; 
       for(int i=s; i<=e; i++){
             if(prime[i]){
                 ct++;
             }
       }
       return ct; 

  
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}