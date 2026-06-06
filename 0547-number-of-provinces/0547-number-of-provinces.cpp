class Solution {
public:
    void dfs(int city,vector<vector<int>>& isConnected,vector<int>& vis){
        vis[city]=1;
        for(int nbr=0;nbr<isConnected.size();nbr++){
            if(isConnected[city][nbr]==1 && !vis[nbr]){
                dfs(nbr,isConnected,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();

        vector<int> vis(n, 0);

        int provinces = 0;

        for(int city = 0; city < n; city++) {

            if(!vis[city]) {

                provinces++;

                dfs(city, isConnected, vis);
            }
        }

        return provinces;

    }
};