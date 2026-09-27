class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto &ed:edges){
            adj[ed[0]].push_back(ed[1]);
            adj[ed[1]].push_back(ed[0]);
        }
        vector<bool> vis(n,false);
        queue<int> qu;
        qu.push(source);
        vis[source]=true;
        while(!qu.empty()){
            int u=qu.front();
            qu.pop();
            if(u==destination){
                return true;
            }
            for(auto ad:adj[u]){
                if(!vis[ad]){
                    vis[ad]=true;
                    qu.push(ad);
                }
            }
        }
        return false;
    }
};
