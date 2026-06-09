class Solution {
  public:
    int maxSubarraySum(vector<int>& nums, int k) {
        // code here
        int i=0;
        int j=0;
        int maxi=INT_MIN;
        int sum=0;
        while(j<nums.size()){
            sum=sum+nums[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                maxi=max(maxi,sum);
                sum=sum-nums[i];
                i++;
                j++;
            }
        }
        return maxi;
    }
};