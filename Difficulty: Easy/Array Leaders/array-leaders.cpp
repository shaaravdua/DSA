

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int maxi=INT_MIN;
        vector<int> ans;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>=maxi){
                ans.push_back(arr[i]);
                maxi=arr[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};