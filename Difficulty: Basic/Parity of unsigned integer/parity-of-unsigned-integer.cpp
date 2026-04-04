class Solution {
  public:
    string computeParity(int N) {
        // code here
        int cnt =0;
        while(N>0){
            N = N & (N-1);
            cnt++;
        }
        if(cnt%2==0) return "even";
        return "odd";
    }
};