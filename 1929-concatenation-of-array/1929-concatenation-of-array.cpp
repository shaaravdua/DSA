class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n+n);
        for(int i=0;i<n+n;i++){
            if(i<n){
                ans[i]=nums[i];
            }
            else{
                ans[i]=nums[i-n];
            }
        }
        return ans;
    }
};