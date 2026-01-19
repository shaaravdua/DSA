class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        // code here
        unordered_map<int,int> mp;
        for(int num:arr){
            if(mp[num]>=1){
                return true;
            }
            mp[num]++;
        }
        return false;
    }
};
