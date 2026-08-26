class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        int k=s1.length();
        vector<int> need(26,0);
        vector<int> window(26,0);
        for(int i=0;i<k;i++){
            need[s1[i]-'a']++;
        }
        for(int i=0;i<k;i++){
            window[s2[i]-'a']++;
        }
        if(need==window){
            return true;
        }
        for(int r=k;r<s2.length();r++){
            window[s2[r]-'a']++;
            window[s2[r-k]-'a']--;
            if(need==window){
                return true;
            }
        }
        return false;
    }
};
