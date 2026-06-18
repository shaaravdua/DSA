class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        unordered_map<int,bool> seen;
        vector<int> result;
        for(int val:arr){
            if(!seen[val]){
                result.push_back(val);
                seen[val]=true;
            }
        }
        return result;
    }
};