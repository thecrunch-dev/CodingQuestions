#include <iostream>
#include <vector>
#include<string>
using namespace std;
           // Leetcode Question
           // arr = 'a', 'b', 'b','c','c'  => 'a','b','2','c','2'

           // return the new Length of the compressed array. 

    int compress(vector<char>& chars) {
       int i =0;
       int ansIndex =0;
       int n = chars.size();

       while (i<n)
       {
        int j = i+1;
        while (j<n && chars[i]==chars[j])
        {
           j++; 
        }

        // yahar kab aagoge
        // ya toh vector poora traverse krdia
        // ya fer new/Different character encounter kia hai
        
        //old character store karlo
        chars[ansIndex++] = chars[i]; 

        int count = j-i;

        if(count > 1){
            // converting counting into single digit and saving. 
            string cnt = to_string(count);  
            for(char ch : cnt){
                chars[ansIndex++] = ch;
            }  
        }
         i=j;
       }
       return ansIndex; 
       
    }
int main (){

      
}