
#include <bits/stdc++.h>
using namespace std;

char getMaxOccurringChar(string str)
{   
    unordered_map<char,int> mp;
    int n=str.length();
    char ans;
    int count=0;
    for(int i=0;i<n;i++){
        mp[str[i]]++;
        if(count<mp[str[i]]){
            ans=str[i];
            count=mp[str[i]];
        }
    }
    return ans;
}

int main()
{
    string str="teestt";
    cout << "Max occurring character is: "
         << getMaxOccurringChar(str);
}
