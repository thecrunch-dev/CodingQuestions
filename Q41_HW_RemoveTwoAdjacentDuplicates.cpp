#include <iostream>
using namespace std;
 
 // Solved by own, it is accepted on Leetcode - personal google account. 
string removeTwoAdjDuplicates(string s){
  
    string temp; 
    
    for (int i = 0; i < s.length(); i++) 
    {  
     if( (temp.empty()==0)&& (temp.back() == s[i])){
       temp.pop_back();  
    
     } 
    
  else{
        temp.push_back(s[i]);
     
  }

}      
return temp; 
    }
    
int main (){
         string s = "axxxzy"; 
         cout << removeTwoAdjDuplicates(s); 
}