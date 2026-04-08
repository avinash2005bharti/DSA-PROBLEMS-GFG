class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int cnt =0;
        while(n>0){
            cnt++;
            n= n & (n-1);
            
        }
        return cnt;
    }
};