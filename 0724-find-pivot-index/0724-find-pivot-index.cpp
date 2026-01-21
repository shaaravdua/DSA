class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int left=0;
        int total=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            total+=arr[i];
        }
        for(int i=0;i<n;i++){
            total-=arr[i];
            if(total==left){
                return i;
            }
            left+=arr[i];
        }
        return -1;
    }
};