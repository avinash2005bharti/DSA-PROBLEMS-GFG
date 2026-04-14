class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n = a.size(), m = b.size();
        
        if(n == 0) return b;
        if(m == 0) return a;

        // Step 1: Merge arrays
        vector<int> ans(n + m);
        int i = 0, j = 0, k = 0;

        while(i < n) ans[k++] = a[i++];
        while(j < m) ans[k++] = b[j++];

        // Step 2: Sort
        sort(ans.begin(), ans.end());

        // Step 3: Remove duplicates using stack
        stack<int> st;
        st.push(ans[0]);

        for(int i = 1; i < ans.size(); i++) {
            if(st.top() != ans[i]) {
                st.push(ans[i]);
            }
        }

        // Step 4: Copy back to vector
        vector<int> res(st.size());
        int idx = st.size() - 1;

        while(!st.empty()) {
            res[idx--] = st.top();
            st.pop();
        }

        return res;
    }
};