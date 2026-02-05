class Solution {
public:
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<pair<int,int>> st; // {price, span}

        for(int i = 0; i < n; i++) {
            int span = 1;

            while(!st.empty() && st.top().first <= arr[i]) {
                span += st.top().second;
                st.pop();
            }

            st.push({arr[i], span});
            ans[i] = span;
        }
        return ans;
    }
};