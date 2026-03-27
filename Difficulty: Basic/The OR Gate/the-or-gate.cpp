
class Solution {
  public:
    int orGate(vector<int> arr, int N) {
        // code here
        if(N==1)return arr[0];
        long long x = arr[0];
        for(int i=1;i<N;i++){
           x = arr[i] | x;
        }
        return x;
    }
};