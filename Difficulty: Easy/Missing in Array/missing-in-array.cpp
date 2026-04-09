class Solution {
public:
    long long sum(long long len) {
        long long actual_sum = 1LL * len * (len + 1);
        return actual_sum / 2;
    }

    long long missingNum(vector<int>& arr) {
        long long n = arr.size() + 1;   // total numbers should be n
        long long actual_sum = sum(n);
        long long curr_sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            curr_sum += arr[i];
        }

        return actual_sum - curr_sum;
    }
};