#include <iostream>
using namespace std;

string toggleChar(string &str) {
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    return str;
}

int main() {
    string str = "SMALLcase";
    str = toggleChar(str);
    cout << str;
    return 0;
}
