class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {    
        int i=0, j=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        while(j<arr.size()){
            pq.push(arr[j]);
            if(pq.size()>k){
                arr[i]=pq.top();
                pq.pop();
                i++;
            }
            j++;
        }
        while(pq.size()!=0){
            arr[i]=pq.top();
            pq.pop();
            i++;
        }
    }
};