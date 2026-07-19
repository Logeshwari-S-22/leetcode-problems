#include <iostream>
#include <string>
using namespace std;

string removeSpaces(string& s) {
    int n=s.length();
    int i=0,idx=0;
    while(i<n){
        if(s[i]!=' '){
            s[idx++]=s[i];
        }
        i++;
    }
    return s.substr(0,idx);
}

int main() {
    string s = "   abc d efg hi jk l";
    cout << removeSpaces(s);
    return 0;
}
