class Solution {
  public:
    bool dfs(int node,int parent,vector<int> adj[],vector<int>& vis){
        vis[node]=1;
        for(auto nbr : adj[node]){
            if(!vis[nbr]){
                if(dfs(nbr,node,adj,vis)==true){
                    return true;
                }
            }
            else if(nbr!=parent){
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<int> adj[V];
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i] && dfs(i,-1,adj,vis)){
                return true;
            }
        }
        return false;
    }
};