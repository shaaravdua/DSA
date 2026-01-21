class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sumLeft;
        int lsum=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int rsum=sum-lsum-nums[i];
            if(lsum==rsum){
                return i;
            }
            lsum+=nums[i];
        }
        return -1;
    }
};