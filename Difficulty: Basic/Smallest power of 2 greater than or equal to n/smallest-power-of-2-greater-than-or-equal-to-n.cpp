class Solution {
public:
    long long nearestPowerOf2(long long N) {
        long long p = 1;
        
        while(p < N){
            p <<= 1;   // multiply by 2
        }
        
        return p;
    }
};