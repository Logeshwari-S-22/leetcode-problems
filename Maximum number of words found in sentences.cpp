class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(string s:sentences){
            int word=1;
            for(char ch:s){
                if(ch==' '){
                    word++;
                }
            }
            ans=max(ans,word);
        }
        return ans;
    }
};
