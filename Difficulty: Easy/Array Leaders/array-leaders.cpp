class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int> res;
        int n=arr.size();
        int maxright=arr[n-1];
        res.push_back(maxright);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=maxright){
                maxright=arr[i];
                res.push_back(maxright);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};