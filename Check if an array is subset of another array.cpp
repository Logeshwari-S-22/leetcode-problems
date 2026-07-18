#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isSubset( vector<int>& a,  vector<int>& b) {
    unordered_map<int,int> freq;
    for(int x:a){
        freq[x]++;
    }
    for(int x:b){
        if(freq[x]==0){
            return false;
        }
        freq[x]--;
    }
    return true;
}

int main() {
    vector<int> a = {11, 1, 13, 21, 3, 7};
    vector<int> b = {11, 3, 7, 1};
    
    if (isSubset(a, b)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}
