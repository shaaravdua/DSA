class Solution {
  public:
    int sum=0;
    int sum_of_ap(int n, int a, int d) {
        // Code here.
        sum = (n * (2 * a + (n - 1) * d)) / 2;
        return sum;
        
    }
};