class Solution {
  public:
    vector<int> getXor(vector<int> A, int N) {
        // Write your Code here
        // if(N==1)return A;
        vector<int>ans=A;
        long long x=0;
        for(int i=0;i<A.size();i++){
            x ^= A[i];
        }
        for(int i=0;i<N;i++){
            ans[i]=x^A[i];
        }
        return ans;
    }
};