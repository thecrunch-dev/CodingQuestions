#include <iostream>
using namespace std;
    bool valid(char ch){
        if((ch>='A' && ch <='Z')|| (ch>='a' && ch<='z')|| ((ch>='0' && ch<='9'))){
             return 1; 
        }
        return 0;
    }
      
      char toLowerCase(char ch){
        if((ch>='a' && ch<='z' )|| (ch>='0' && ch<='1' ) ){
            return ch; 
        }

        else{
            char temp = ch - 'A' + 'a'; 
            return temp; 
        }


      }
      
      bool checkPalindrome(string s){
        int st = s[0];
        int e = s[s.length()-1];
      
    while (st<=e)
    {
        if(s[st]!=s[e]){
           return 0; 
        }
        st++;
        e--; 
    }
    
         return 1; 

      }




     bool isPalidrome(string s){
               // faltu character hata do.
           string temp = ""; 

           for (int j = 0; j < s.length(); j++)
           {
            if(valid(s[j])){
               temp.push_back(s[j]);
            }
           }
           
           // lowerCase mein Kar do
           for (int j = 0; j < temp.length(); j++)
           {
             temp[j] = toLowerCase(temp[j]); 
           }
           
         // check Palindrome

           
          return checkPalindrome(temp); 


        

     }






int main (){
         cout << isPalidrome("Nz1221zN") << endl; 
         cout << isPalidrome("N&N12321N") << endl;
         cout << isPalidrome(""); 
}          