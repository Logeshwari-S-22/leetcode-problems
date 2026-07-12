#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> minAnd2ndMin(const vector<int> &arr) {
    
    int n = arr.size();
    if (n < 2) {
        return { -1 };
    }

    int first = INT_MAX;
    int second = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == INT_MAX) {
        return { -1 };
    }
    return { first, second };
}

int main() {
    vector<int> arr = {12, 25, 8, 55, 10, 33, -17, 11};
    vector<int> res = minAnd2ndMin(arr);
    for (int x : res) {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}
