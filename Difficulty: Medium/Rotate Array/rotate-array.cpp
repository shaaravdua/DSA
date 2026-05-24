class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();

        d %= n;

        // Step 1: reverse first d elements
        reverse(arr.begin(), arr.begin() + d);

        // Step 2: reverse remaining elements
        reverse(arr.begin() + d, arr.end());

        // Step 3: reverse whole array
        reverse(arr.begin(), arr.end());
    }
};