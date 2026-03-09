class Solution {
public:
    string largestSwap(string &s) {
        int n = s.size();
        
        // Rightmost max index array
        vector<int> rightMax(n);
        rightMax[n-1] = n-1;
        
        for(int i = n-2; i >= 0; i--) {
            if(s[i] > s[rightMax[i+1]])
                rightMax[i] = i;
            else
                rightMax[i] = rightMax[i+1];
        }
        
        // Find first smaller digit
        for(int i = 0; i < n; i++) {
            if(s[i] < s[rightMax[i]]) {
                swap(s[i], s[rightMax[i]]);
                break;
            }
        }
        
        return s;
    }
};