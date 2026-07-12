#include <iostream>
#include <algorithm>
using namespace std;

string decToBinary(int n) {
    int num=n;
    if(num==0){
        return "0";
    }
    string bin="";
    while(num>0){
        int bit=num%2;
        bin.push_back('0'+bit);
        num/=2;
    }
    reverse(bin.begin(),bin.end());
    return bin;
}

int main() {
    int n = 33;
    cout << decToBinary(n);
    return 0;
}
