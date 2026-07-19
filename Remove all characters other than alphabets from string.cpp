#include <bits/stdc++.h>
using namespace std;

void removeSpecialCharacter(string s)
{
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z'){
            s[j]=s[i];
            j++;
        }
    }
    cout<<s.substr(0,j);
}

int main()
{
    string s = "P&ro+$BHa;;rat*, ma$t@@s#ch}s"; 
    removeSpecialCharacter(s); 
    return 0;
}
