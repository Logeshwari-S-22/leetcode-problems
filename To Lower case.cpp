class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(!islower(ch)){
                s[i]=tolower(s[i]);
            }
        }
        return s;
    }
};
