class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto& it:mp){
            if(it.second==2){
                result.push_back(it.first);
            }
        }
        return result;
    }
};