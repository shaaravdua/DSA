class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        vector<int> even, odd;

        // Separate even and odd
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 == 0)
                even.push_back(arr[i]);
            else
                odd.push_back(arr[i]);
        }

        // Sort each part
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        // Combine results back into arr
        int index = 0;
        for (int num : even)
            arr[index++] = num;
        for (int num : odd)
            arr[index++] = num;
    }
};