#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int firstNonRepeating(const vector<int>& arr) {
    unordered_map<int, int> mp;
    for (int num : arr){
        mp[num]++;
    }
    for (int num : arr){
        if (mp[num] == 1)
            return num;
    }
    return 0;
}

int main() {
    vector<int> arr = {-1, 2, -1, 3, 2};
    cout << firstNonRepeating(arr);
    return 0;
}
