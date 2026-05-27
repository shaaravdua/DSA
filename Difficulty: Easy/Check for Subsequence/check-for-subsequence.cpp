class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        // code here
        int sp=0;
        int tp=0;
        while(sp<s1.length() && tp<s2.length()){
            if(s1[sp]==s2[tp]){
                sp++;
            }
            tp++;
        }
        return sp==s1.length();
    }
};