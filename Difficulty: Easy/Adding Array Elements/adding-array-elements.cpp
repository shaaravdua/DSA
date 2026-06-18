class Solution {
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i = 0; i < n; i++) {
            pq.push(arr[i]);
        }

        int cnt = 0;

        while(pq.size() > 1 && pq.top() < k) {
            int x = pq.top();
            pq.pop();

            int y = pq.top();
            pq.pop();

            pq.push(x + y);
            cnt++;
        }

        if(pq.top() < k)
            return -1;

        return cnt;

    }
};