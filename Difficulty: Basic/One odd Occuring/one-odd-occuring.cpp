class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        int ans =0;
        for(int x:arr) ans= ans^x;
        return ans;
    }
};