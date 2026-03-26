class Solution {
public:
    vector<int> findEvenOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        
        // Step 1: Count frequency
        for(int x : arr) {
            mp[x]++;
        }
        
        vector<int> ans;
        unordered_set<int> used; // duplicate avoid
        
        // Step 2: Maintain order
        for(int x : arr) {
            if(mp[x] % 2 == 0 && used.find(x) == used.end()) {
                ans.push_back(x);
                used.insert(x);
            }
        }
        
        if(ans.size() == 0) return {-1};
        
        return ans;
    }
};