#include <iostream>
using namespace std;

string removeOccurances(string s, string part){

      while (s.length()!=0 && s.find(part) < s.length())
      {
           s.erase(s.find(part), part.length());   
      }
      

}

int main (){

}