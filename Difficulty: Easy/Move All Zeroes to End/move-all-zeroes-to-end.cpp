class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int j = 0; // next position for non-zero

        for (int i = 0; i < (int)arr.size(); i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};