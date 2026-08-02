class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        for(int i=0; i<arr.size(); i++){
            string str = to_string(arr[i]) ;
            
            int start = 0;
            int end = str.length() - 1;
            
            while(start < end ){
                if(str[start] == str[end])
                    start ++ , end -- ;
                
                else return 0;
            }
        } 
        return 1;

    }
};