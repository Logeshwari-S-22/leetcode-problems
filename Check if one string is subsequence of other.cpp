class Solution {
public:
    bool isSubSeqRec(string& s1,string& s2,int m,int n){
        if(m==0){
            return true;
        }
        if(n==0){
            return false;
        }
        if(s1[m-1]==s2[n-1]){
            return isSubSeqRec(s1,s2,m-1,n-1);
        }
        return isSubSeqRec(s1,s2,m,n-1);
    }
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        if(m>n){
            return false;
        }
        return isSubSeqRec(s,t,m,n);
    }
};
