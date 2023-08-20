#include <iostream>
using namespace std;

int gcd(int a, int b){
    while (a!=b)
    {
         if(a>b){
            a = a -b; 
         }

         else{
            b = b - a; 
         }
    }
    return a; 
}



int main (){
         int a = 72;
         int b =24;

        int hcf =  gcd(a,b); 

        cout << "The gcd of " << a << " and " << b << " is: " << hcf; 
}