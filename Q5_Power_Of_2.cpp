#include <iostream>
using namespace std;
int main (){
    int n =10;
    int ans =1;
    for (int i = 1; i < 30; i++)
    {     
        if(n==ans){
            return true;
         }

         if(ans <INT32_MAX/2){
            int ans = ans * 2;
         }
         
         
    }
    return false;
    
}