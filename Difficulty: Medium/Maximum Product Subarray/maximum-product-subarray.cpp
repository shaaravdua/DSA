class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int maxending=arr[0];
        int minending=arr[0];
        int res=arr[0];
        for(int i=1;i<arr.size();i++){
            int v1=arr[i];
            int v2=arr[i]*maxending;
            int v3=arr[i]*minending;
            maxending=max(v1,max(v2,v3));
            minending=min(v1,min(v2,v3));
            res=max(res,max(maxending,minending));
        }
        return res;
        
    }
};