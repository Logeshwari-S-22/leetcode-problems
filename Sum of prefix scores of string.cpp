class Solution {
public:
    struct TrieNode{
        TrieNode* child[26];
        int count;
        TrieNode(){
            count=0;
            for(int i=0;i<26;i++){
                child[i]=nullptr;
            }
        }
    };
    TrieNode* root = new TrieNode();
 
    void insert(string word){
        TrieNode* curr=root;
        for(char ch:word){
             int index=ch-'a';
             if(curr->child[index]==nullptr){
                curr->child[index]=new TrieNode();
             }
             curr=curr->child[index];
             curr->count++;
        }
    }
    int getScore(string word){
        TrieNode* curr=root;
        int score=0;
        for(char ch:word){
            int index=ch-'a';
            curr=curr->child[index];
            score+=curr->count;
        }
        return score;
    }
    vector<int> sumPrefixScores(vector<string>& words) {
        for(string w:words){
            insert(w);
        }
        vector<int> ans;
        for(string word:words){
            ans.push_back(getScore(word));
        }
        return ans;
    }
};
