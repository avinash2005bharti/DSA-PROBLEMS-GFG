class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // code here
        int ans = a^b;
        int cnt=0;
        for(int i=0;i<31;i++){
            if(ans &(1<<i)) cnt++;
        }
        return cnt;
    }
};