class Solution {
  public:
    int andGate(vector<int> arr, int N) {
        // code here
        sort(arr.begin(),arr.end());
        if(arr[0]!=0) return 1;
        return 0;
    }
};