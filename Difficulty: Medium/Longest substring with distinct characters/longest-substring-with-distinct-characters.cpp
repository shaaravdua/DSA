class Solution {
public:
    int longestUniqueSubstr(string &s) {
        int n = s.size();
        vector<int> lastIndex(256, -1); // all -1
        int maxlen = 0, l = 0;

        for (int r = 0; r < n; ++r) {
            if (lastIndex[(unsigned char)s[r]] >= l) {
                l = lastIndex[(unsigned char)s[r]] + 1;
            }
            lastIndex[(unsigned char)s[r]] = r;
            maxlen = max(maxlen, r - l + 1);
        }
        return maxlen;
    }
};
