class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
            if(s1.length()!=s2.length()){
                return false;
            }
            string doubledS = s1 + s1;
            return doubledS.find(s2) != string::npos;

        }
    
};