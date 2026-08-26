class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> fr(26,0);
        int l=0;
        int r=0;
        int maxf=0,maxlen=0;
        while(r<s.length()){
            fr[s[r]-'A']++;
            maxf=max(maxf,fr[s[r]-'A']);
            if((r-l+1) - maxf >k){
                fr[s[l]-'A']--;
                l++;
            } 
            maxlen=max(maxlen,(r-l+1));
            r++;
        }
        return maxlen;
    }
};
