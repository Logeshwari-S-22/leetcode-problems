class Solution {
public:
    string simplifyPath(string path) {
        stack<string> sk;
        stringstream ss(path);
        string word;
        while(getline(ss,word,'/')){
            if(word=="" || word=="."){
                continue;
            }
            else if(word==".."){
                if(!sk.empty()){
                    sk.pop();
                }
            }
            else{
                sk.push(word);
            }
        }
        string ans="";
        while(!sk.empty()){
            ans="/"+sk.top()+ans;
            sk.pop();
        }
        if(ans==""){
            return "/";
        }
        return ans;
    }
};
