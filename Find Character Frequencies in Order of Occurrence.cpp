#include <iostream>
#include<unordered_map>
using namespace std;

string modifyString(string &s) {
   unordered_map<char,int> d;
   string res="";
   for(char ch:s){
       d[ch]++;
   }
   for(char i:s){
       if(d[i]!=0){
           res+=i+to_string(d[i])+" ";
           d[i]=0;
       }
   }
   return res;
}

int main() {
    string s = "elephant";
    cout << modifyString(s);
    return 0;
}
