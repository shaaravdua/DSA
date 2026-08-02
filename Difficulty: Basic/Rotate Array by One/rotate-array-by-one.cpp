class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        reverse(arr.begin(),arr.end());
        reverse(arr.begin()+1,arr.end());
        reverse(arr.begin(),arr.begin()+1);
    }
};