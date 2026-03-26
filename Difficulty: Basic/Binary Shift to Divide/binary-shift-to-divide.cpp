// User function Template for C++
class Solution {
  public:
    int half(int N) {
        // code here
        if(N==1 || N==0) return N;
        return floor(N>>1);
    }
};