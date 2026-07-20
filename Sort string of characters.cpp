#include <iostream>
#include <vector>
using namespace std;

string sortString(string &s)
{
    vector<int> freq(26,0);
    string ans="";
    for(char ch:s){
        freq[ch-'a']++;
    }
    for(int i=0;i<26;i++){
        while(freq[i]>0){
            ans+=(char)(i+'a');
            freq[i]--;
        }
    }
    return ans;
}

int main()
{
    string s = "xzyxx";
    cout << sortString(s);
    return 0;
}
