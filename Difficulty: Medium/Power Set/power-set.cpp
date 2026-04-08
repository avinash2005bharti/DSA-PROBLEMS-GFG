class Solution {
  public:
    vector<string> AllPossibleStrings(string s) {
        // Code here
        int n = s.size();
        int subset =1<<n;
        vector<string>ans;
        for(int num=0;num<subset;num++){
            string temp;;
        for(int i=0;i<n;i++){
            if(num&(1<<i)){
                temp.push_back(s[i]);
            }
        }
        ans.push_back(temp);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};