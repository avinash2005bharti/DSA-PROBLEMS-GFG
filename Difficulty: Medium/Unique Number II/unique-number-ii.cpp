class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        long long n= arr.size();
        long long xorr=0;
        for(int i=0;i<n;i++){
            xorr=xorr^arr[i];
        }
        int rightmost = (xorr)&(-xorr);
        int b1=0,b2=0;
        for(int i =0;i<n;i++){
            if(arr[i]&rightmost) b1=b1^arr[i];
            else b2= b2^arr[i];
        }
        if(b1>b2) return{b2,b1};
        return {b1,b2};
    }
};