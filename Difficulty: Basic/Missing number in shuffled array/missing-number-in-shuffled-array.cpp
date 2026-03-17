

class Solution {
  public:
    int findMissing(vector<int>& arr1, vector<int>& arr2) {
        // your code
       int ans=0;
       int bns= 0;
       int n = arr1.size();int m = arr2.size();
       
      for(int x: arr1)ans=ans^x;
      for(int y:arr2)bns = bns^y;
      int res = ans^bns;
      return res;
       
    }
};