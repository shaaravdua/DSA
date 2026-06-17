class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        if(arr.size()%2==0){
            float mid1=arr[arr.size()/2];
            float mid2=arr[arr.size()/2-1];
            return (mid1+mid2)/2;
        }
        return arr[arr.size()/2];
    }
};