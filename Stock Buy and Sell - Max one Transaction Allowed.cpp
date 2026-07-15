#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices) {
  
    int minSoFar = prices[0], maxprof = 0;
    for (int i = 1; i < prices.size(); i++) {
        minSoFar = min(minSoFar, prices[i]);                
        maxprof = max(maxprof, prices[i] - minSoFar);
    }
    return maxprof;
}

int main() {
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    cout << maxProfit(prices) << endl;
    return 0;
}
