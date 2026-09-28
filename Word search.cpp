class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int r,int c,int idx){
        int n=board.size();
        int m=board[0].size();
        if(idx==word.size()){
            return true;
        }
        if(r<0 || c<0 || r>=n || c>=m || board[r][c] != word[idx]){
            return false;
        }
        char temp=board[r][c];
        board[r][c]='#';
        bool found= dfs(board,word,r+1,c,idx+1)||
                dfs(board,word,r-1,c,idx+1)||
                dfs(board,word,r,c+1,idx+1)||
                dfs(board,word,r,c-1,idx+1);
        board[r][c]=temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dfs(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};
