class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<pair<int,int>> sorted_items;
        for(auto& it:mp){
            sorted_items.push_back({it.first,it.second});
        }
        sort(sorted_items.begin(),sorted_items.end(),[](pair<int,int>& a,pair<int,int>& b){
            return a.second>b.second;
        });
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(sorted_items[i].first);
        }
        return result;
    }
};