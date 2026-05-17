class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return;
        int n=mat.size();
        int m=mat[0].size();
        int MARKER = -2000000000;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    for(int col=0;col<m;col++){
                        if(mat[i][col]!=0){
                            mat[i][col]=MARKER;
                        }
                    }
                    for(int row=0;row<n;row++){
                        if(mat[row][j]!=0){
                            mat[row][j]=MARKER;
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==MARKER){
                    mat[i][j]=0;
                }
            }
        }
    }
};