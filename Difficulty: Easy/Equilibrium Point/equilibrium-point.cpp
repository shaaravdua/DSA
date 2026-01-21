class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int sum=0;
        int left=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        for(int i=0;i<n;i++){
            sum-=arr[i];
            if(left==sum){
                return i;
            }
            left+=arr[i];
       }
       return -1;
    }
};