// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int ans=0;
        for(int num:arr){
            ans^=num;
        }
        return ans;
    }
};