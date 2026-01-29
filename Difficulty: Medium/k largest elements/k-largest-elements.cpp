class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        priority_queue<int,vector<int>,greater<int>> minh;
        for(int i=0;i<arr.size();i++){
            minh.push(arr[i]);
            if(minh.size()>k){
                minh.pop();
            }
        }
        vector<int> result;
        while(!minh.empty()){
            result.push_back(minh.top());
            minh.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};