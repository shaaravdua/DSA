class Solution {
    private:
        void ls(int node,vector<vector<int>> &adj,vector<int> &vis,vector<int> &dfs){
            vis[node]=1;
            dfs.push_back(node);
            for(auto it : adj[node]){
                if(!vis[it]){
                    ls(it,adj,vis,dfs);
                }
            }
        }
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        vector<int> dfs;
        vector<int> vis(n,0);
        int start=0;
        ls(start,adj,vis,dfs);
        return dfs;
    }
};