class Solution {
public:
    bool SelfDividing(int num){
        int temp=num;
        while(temp>0){
            int digit=temp%10;
            if(digit==0||num%digit!=0){
                return false;
            }
            temp/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(SelfDividing(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};