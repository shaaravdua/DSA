class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return;
        int n=mat.size();
        int m=mat[0].size();
        vector<int> row(n,0);
        vector<int> col(m,0);
        int MARKER = -2000000000;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    row[i]=MARKER;
                    col[j]=MARKER;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]==MARKER || col[j]==MARKER){
                    mat[i][j]=0;
                }
            }
        }
    }
};