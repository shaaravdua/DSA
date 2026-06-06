class Solution {
  public:
    void dfs(int row,int col,vector<vector<int>>& image,int oldcolor,int newcolor){
        int n=image.size();
        int m=image[0].size();
        image[row][col]=newcolor;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+dr[i];
            int ncol=col+dc[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==oldcolor){
                dfs(nrow,ncol,image,oldcolor,newcolor);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // code here
        int oldcolor=image[sr][sc];
        if(oldcolor==newColor){
            return image;
        }
        dfs(sr,sc,image,oldcolor,newColor);
        return image;
        
    }
};