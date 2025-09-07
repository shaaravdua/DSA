class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = (int)arr.size() + 1;   // array length is n-1
        long long xor_all = 0;
        long long xor_arr = 0;

        for (long long i = 1; i <= n; ++i) xor_all ^= i;
        for (int v : arr) xor_arr ^= (long long)v;

        return static_cast<int>(xor_all ^ xor_arr);
    }
};