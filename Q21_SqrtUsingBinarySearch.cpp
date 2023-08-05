#include <iostream>
using namespace std;

long long int SqrtInteger(int n){
    int s =0;
    int e = n;
    int mid = s + (n-s)/2;
    int ans = -1;
    while (s<=e)
    { 
        long long int square = mid*mid;
       if(square>n){
           e = mid -1;
       }
       else if(square<n){
         ans = mid;
         s = mid +1;
       }
       else if(square==n){
        return mid;
       }
       mid = s + (e-s)/2;
    }
    return ans;
}
  
  double morePrecision(int n, int precision, int SqrtInt){
            double factor = 1;
            double ans = SqrtInt;
            
            for (int i = 0; i < precision; i++)
            {
              factor = factor/10;
              for (double j = ans; j*j<n; j=j+factor)
              { 
                ans = j;
                  
              }
              
            }
            return ans;
            
  }

double Sqrt(int n){
           int SqrtInt = SqrtInteger(n);
           double ans = morePrecision(n,3,SqrtInt);
           return ans;

}

int main (){
      double sqr  = Sqrt(101);
        cout << "The square root of 37 is " << sqr << endl;
}