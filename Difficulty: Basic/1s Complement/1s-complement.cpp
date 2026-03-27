
class Solution {
  public:
    string onesComplement(string s, int N) {
        // code here
        for(int i=0;i<N;i++){
            if(s[i]=='1')s[i]='0';
           else s[i]='1';
        }
        return s;
    }
};