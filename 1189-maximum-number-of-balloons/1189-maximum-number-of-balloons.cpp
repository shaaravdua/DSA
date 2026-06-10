class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp,txt;
        string s="balloon";
        int minWord=INT_MAX;
        for(char c:s){
            mp[c]++;
        }
        for(char c:text){
            txt[c]++;
        }
        for(auto c: mp){
            int q = txt[c.first] / mp[c.first];  //q is quotient
            minWord = min(minWord, q);
        }
        return minWord;
    }
};