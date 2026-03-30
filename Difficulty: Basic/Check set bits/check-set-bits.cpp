
class Solution {
  public:
    int isBitSet(int N) {
        // code here
        if(N==0) return 0;
        int i =0;
        while((N>>i)!=0){
            i++;
        }
        // i=i+1;
        if(N==((1<<i)-1)) return 1;
        return 0;
       
    }
};