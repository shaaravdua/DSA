
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1){
                return s[i];
            }
        }
        return '$';
    }
};