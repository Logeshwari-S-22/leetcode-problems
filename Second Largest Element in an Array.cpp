#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    int largest = INT_MIN;
    int seclargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            seclargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > seclargest) {
            seclargest = arr[i];
        }
    }

    return (seclargest == INT_MIN) ? -1 : seclargest;
}

int main() {
    vector<int> arr = {120, 35, 111, 10, 34, 1};
    cout << getSecondLargest(arr);
}
