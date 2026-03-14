class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seenNumbers;
        for(int num:nums){
            if(seenNumbers.contains(num)){
                return true;
            }
            else{
                seenNumbers.insert(num);
            }
        }
        return false;
    }
};