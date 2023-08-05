#include <iostream>
using namespace std;

void getMaxOccuringCharacter(string s){
    int arr[26] = {0};
    char ch; 
    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i]; 
        int number =0; 
        // LowerCase 
        if(ch>='a' && ch <='z'){
            number = ch - 'a';   
        }

      // UpperCase characters 
        else{
            number = ch - 'A'; 
        }
          arr[number]++; 
    }

    // Find the maximum number of times the character with ith index has occured. 

    int max = -1;
    char ans = -1;

    for (int i = 0; i < 26; i++)
    { 
       
       if(max < arr[i]){
        max = arr[i];
        ans = 'a' + i; 
       }
         
    }


 cout << "The character " << ans << " occured " << "at max of " << max << " times. " ;
    
    
}





int main (){
       string s = "testSample ";
       getMaxOccuringCharacter(s); 
}