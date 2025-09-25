
class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {

        // Code Here
        int ele=0;
        for(int i=0;i<arr.size();i++){
            if(x>=arr[i]){
                ele++;
            }
        }
        return ele;
    }
};