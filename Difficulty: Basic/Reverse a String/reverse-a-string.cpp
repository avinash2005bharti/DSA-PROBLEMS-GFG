// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n = s.size();
        if(n==0 || n==1) return s;
        int i=0;int j= n-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;j--;
        }
        return s;
    }
};
