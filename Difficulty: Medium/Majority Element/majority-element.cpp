class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        int count=-1;
        int freq=0;
        for(auto& it:mp){
            if(it.second>freq){
                freq=it.second;
                count=it.first;
            }
        }
        if(freq>nums.size()/2){
            return count;
        }
        
        return -1;
    }
};