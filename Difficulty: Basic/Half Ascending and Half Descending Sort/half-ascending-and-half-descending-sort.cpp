class Solution {
  public:
    vector<int> customSort(vector<int>& arr) {
        // code here
        int n = arr.size();

        sort(arr.begin(), arr.begin() + n/2);
        sort(arr.begin() + n/2, arr.end(), greater<int>());

        return arr;
    }
};