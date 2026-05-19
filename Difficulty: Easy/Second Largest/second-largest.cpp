class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi=-1;
        int secmaxi=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxi){
                secmaxi=maxi;
                maxi=arr[i];
            }
            if(maxi>arr[i] && arr[i]>secmaxi){
                secmaxi=arr[i];
            }
        }
        return secmaxi;
    }
};