class Solution {
public:
    long long int setAllOddBits(long long int n) {
        if(n == 0) return 1; // edge case
        
        long long bits = floor(log2(n)) + 1;
        
        long long i = 0;
        while(i < bits){
            if(i % 2 == 0)  
                n = n | (1LL << i);
            i++;
        }
        
        return n;
    }
};