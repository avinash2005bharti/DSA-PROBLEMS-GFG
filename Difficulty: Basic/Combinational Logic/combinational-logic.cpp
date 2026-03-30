// User function Template for C++
class Solution {
  public:
    int logicalOperation(int A, int B, int C, int D, int E, int F) {
        // code here
        int a = ~(A) & B;
        int b = C & D;
        int c = E & ~(F);
        int ans1 = a | b;
        int ans2= b|c;
        return ans1 | ans2;
    }
};