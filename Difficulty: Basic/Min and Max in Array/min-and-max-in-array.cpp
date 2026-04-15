class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n = arr.size();
        int mn=INT_MAX,mx=INT_MIN;
        int curr_min=0,curr_max=0;
        for(int i=0;i<n;i++){
            curr_min=arr[i];
            curr_max=arr[i];
            mn = min(curr_min,mn);
            mx = max(curr_max,mx);
        }
        return {mn,mx};
    }
};