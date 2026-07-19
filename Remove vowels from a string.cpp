#include <bits/stdc++.h>
using namespace std;

string remVowel(string str) 
{
    vector<char> vow={'a','e','i','o','u','A','E','I','O','U'};
    for(int i=0;i<str.length();i++){
        if(find(vow.begin(),vow.end(),str[i]) != vow.end()){
            str.replace(i,1,"");
            i-=1;
        }
    }
    return str;
}

int main() 
{
    string str = "what is your name ?";
    cout << remVowel(str) << endl;

    return 0;
}
