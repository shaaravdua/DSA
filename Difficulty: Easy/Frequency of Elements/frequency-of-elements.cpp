class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<vector<int>> res;
        for(auto it:mp){
            res.push_back({it.first,it.second});
        }
        return res;
    }
};