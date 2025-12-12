class Solution {
  public:
    bool eatbanana(int mid,vector<int>& arr,int k){
        int ans=0;
        for(int &x:arr){
            ans+=x/mid;
            if(x%mid!=0){
                ans++;
            }
        }
        return ans<=k;
    }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int start=1;
        int end=*max_element(arr.begin(),arr.end());
        while(start<=end){
            int mid=start+(end-start)/2;
            if(eatbanana(mid,arr,k)){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};