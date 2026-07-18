#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> countFreq(vector<int>& arr) {
    unordered_map<int,int> mp;
    vector<vector<int>> result;
    for(int i:arr){
        mp[i]++;
    }
    for(auto &it:mp){
        result.push_back({it.first,it.second});
    }
    return result;
}

int main() {
    vector<int> arr = {10, 20, 10, 5, 20};

    vector<vector<int>> ans = countFreq(arr);
    sort(ans.begin(), ans.end(), [](vector<int>& a, 
                        vector<int>& b) {
        return a[0] < b[0];  
    });
    for (auto &x : ans) {
        cout << x[0] << " " << x[1] << endl;
    }
    return 0;
}
