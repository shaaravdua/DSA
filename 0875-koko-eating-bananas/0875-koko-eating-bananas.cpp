class Solution {
public:
    bool eatpossible(int mid,int h,vector<int>& piles){
        long long ans=0;
        for(int &x:piles){
            ans+=x/mid;
            if(x%mid!=0){
                ans++;
            }
        }
        return ans<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=*max_element(piles.begin(),piles.end());
        while(start<=end){
            int mid=start+(end-start)/2;
            if(eatpossible(mid,h,piles)){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};