#include <iostream>
using namespace std;
int lengthOfLastWord(string s) {
        int l = s.length();
        int i = l-1;
        int m =0;
           
          
        while(isblank(s[i])==true && i>=1){
            i--;
        }
           if(i==0){
               return 1; 
           }

        while(isblank(s[i])==false && i>=0){
              m++;  
              if(i==0){
                  break;
              }
              i--;
        }
        return m;

    }

int main (){
        string s = " MY name is Khan  ";
        cout << lengthOfLastWord(s) ;
}