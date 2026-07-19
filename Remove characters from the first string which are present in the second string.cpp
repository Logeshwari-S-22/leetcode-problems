#include <bits/stdc++.h>
using namespace std;

string removeChars(string string1, string string2) {
    vector<bool> present(26,false);
    for(char ch:string2){
        present[ch-'a']=true;
    }
    string ans="";
    for(char ch:string1){
        if(!present[ch-'a']){
            ans+=ch;
        }
    }
    return ans;
}
int main()
{
        string string1,string2;
        string1="computer";
        string2="cat";
         cout<<  removeChars(string1,string2)<<endl;;
       return 0;
}
