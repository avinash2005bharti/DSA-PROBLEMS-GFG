class Solution {
  public:
    int replaceBit(int n, int k) {
        int bits = floor(log2(n)) + 1;
        
        if(k > bits) return n;
        
        int pos = bits - k;   // convert to right index
        
        return n & ~(1 << pos);
    }
};