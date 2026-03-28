class Solution {
  public:
    int countSetBits(int n) {
        // code here
      int count = 0;
    int powerOf2 = 1;
    while (powerOf2 <= n) {
        int totalPairs = (n + 1) / (powerOf2 * 2);
        count += totalPairs * powerOf2;

        int remainder = (n + 1) % (powerOf2 * 2);
        count += max(0, remainder - powerOf2);

        powerOf2 <<= 1;
    }
    return count;

    }
};
