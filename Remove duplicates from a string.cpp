#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

string removeDuplicates(string &s)
{
    unordered_set<char> exists;
    string ans="";
    for(char ch:s){
        if(exists.find(ch)==exists.end()){
            ans.push_back(ch);
            exists.insert(ch);
        }
    }
    return ans;
}

int main()
{
    string s = "HaPpyNewYear";
    cout << removeDuplicates(s) << endl;
    return 0;
}
