class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size()>s.size()){
            return ans;
        }
        vector<int> pattern(26,0);
        vector<int> window(26,0);
        for(int i=0;i<p.size();i++){
            pattern[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        if(pattern==window){
            ans.push_back(0);
        }
        for(int i=p.size();i<s.size();i++){
            window[s[i-p.size()]-'a']--;
            window[s[i]-'a']++;
            if(window==pattern){
                ans.push_back(i-p.size()+1);
            }
        }
        return ans;
    }
};
