class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int leftsum=0;
        int total=0;
        for(int x:arr){
            total+=x;
        }
        for(int i=0;i<arr.size();i++){
            total-=arr[i];
            if(leftsum==total){
                return i;
            }
            leftsum+=arr[i];
        }
        return -1;
    }
};