#include <iostream>
using namespace std;

int main() {
    string s = "Hello";

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }

    cout << s;
    return 0;
}
