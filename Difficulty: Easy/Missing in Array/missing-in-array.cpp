class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int cnt=1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]==cnt){
                cnt++;
            }
            else{
                break;
            }
        }
        return cnt;
    }
};