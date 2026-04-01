// User function Template for C++
class Solution {
  public:
    int bitMultiply(int N) {
        // code here
        int x = N;
       int cnt =0;
        while(N>0){
            N= N&(N-1);
            cnt++;
        }
        return cnt * x;
    }
};