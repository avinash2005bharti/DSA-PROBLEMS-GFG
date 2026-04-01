class Solution {
  public:
    int xorGate(vector<int> arr, int N) {
        // code here
        int n = arr.size();
        int x = 0;
        for(int i : arr) x ^= i;
        return x;
    }
};