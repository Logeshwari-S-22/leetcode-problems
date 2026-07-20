#include <bits/stdc++.h>
using namespace std;

int findLongestRepeatingSubseq(int i, int j, string &s) {
    if(i==0 || j==0){
        return 0;
    }
    if(s[i-1]==s[j-1] && i!=j){
        return 1+findLongestRepeatingSubseq(i-1,j-1,s);
    }
    return max(findLongestRepeatingSubseq(i-1,j,s),findLongestRepeatingSubseq(i,j-1,s));
}

int longestRepeatingSubsequence(string s) {
  int n=s.length();
  return findLongestRepeatingSubseq(n,n,s);
}

int main() {
  
    string s = "AABEBCDD";
    int res = longestRepeatingSubsequence(s);
    cout << res;

    return 0;
}
