#include <iostream>
using namespace std;

 // I/P -> My name is Khan.
 // O/p ->My@40name@40is@40Khan.

 string replaceSpaces(string s){
    string temp;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!=' '){
            temp = temp + s[i]; 
        }

        else{
            temp = temp + "@40";
        }
    }
    return temp; 
    
 }

int main (){
     string s = "My name is Khan.";
     cout << s << endl;
     cout << replaceSpaces(s) << endl; 
}