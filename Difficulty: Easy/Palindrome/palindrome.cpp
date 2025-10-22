class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        int reverse=0;
        int temp=abs(n);
        while(temp!=0){
            reverse=(reverse*10)+(temp%10);
            temp=temp/10;
        }
        return(reverse==abs(n));
    }
};