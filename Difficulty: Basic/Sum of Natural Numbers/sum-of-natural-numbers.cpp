class Solution {
  public:
    int findSum(int n) {
        // code here
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        return sum;
    }
};
