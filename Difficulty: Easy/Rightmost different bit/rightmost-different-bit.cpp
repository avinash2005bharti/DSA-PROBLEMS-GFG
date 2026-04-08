class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        //  code here
        if(m==n) return -1;
   int x = m^n;
   int pos = log2(x & -x) + 1;
    return pos;
}
};