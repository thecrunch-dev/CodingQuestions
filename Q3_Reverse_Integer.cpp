#include <iostream>
#include <math.h>
using namespace std;
int main (){
    
    int a = 123;
    int i = 0;
    int ans = 0;
    while (a!=0)
    {  
       if (ans > (INT_FAST32_MAX/10) || ans<(INT_FAST32_MIN/10)){
        // print ans -> ans = 0;
          ans = 0;
        break;
    }
       int digit = a%10;
       ans = ans * 10 + digit;
       a= a/10;
    }
    
    cout << ans;





}