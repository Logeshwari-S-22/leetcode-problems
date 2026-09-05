class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> words;
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        if(pattern.length()!=words.size()){
            return false;
        }
        unordered_map<char,string> cTOs;
        unordered_map<string,char> sTOc;
        for(int i=0;i<pattern.length();i++){
            char a=pattern[i];
            string b=words[i];
            if(cTOs.find(a)!=cTOs.end()){
                if(cTOs[a]!=b){
                    return false;
                }
            }
            if(sTOc.find(b)!=sTOc.end()){
                if(sTOc[b]!=a){
                    return false;
                }
            }
            cTOs[a]=b;
            sTOc[b]=a;
        }
        return true;
    }
};
