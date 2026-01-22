class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        int count=0;
        int freq=0;
        for(auto& it:mp){
            if(it.second>freq){
                freq=it.second;
                count=it.first;
            }
        }
        return count;
    }
};