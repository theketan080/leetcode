class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans = prices;  
        stack<int> st;             

        for (int i = 0; i < n; i++) {
          
            while (!st.empty() && prices[st.top()] >= prices[i]) {
                int id = st.top();
                st.pop();
                ans[id] = prices[id] - prices[i]; 
            }
            st.push(i); 
        }

        return ans;
    }
};
