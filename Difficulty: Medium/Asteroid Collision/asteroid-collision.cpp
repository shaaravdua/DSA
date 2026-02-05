class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        stack<int> st;
        for(int &a:asteroids){
            while(!st.empty() && a<0 && st.top()>0){
                int sum=a+st.top();
                if(sum>0){
                    a=0;
                    break;
                }
                else if(sum<0){
                    st.pop();
                }
                else{
                    st.pop();
                    a=0;
                }
            }
            if(a!=0){
                st.push(a);
            }
        }
        int s=st.size();
            vector<int> result(s);
            int i=s-1;
            while(!st.empty()){
                result[i]=st.top();
                st.pop();
                i--;
        }
        return result;

    }
};