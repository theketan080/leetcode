class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> st;
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            }

            if (s[i] == ')') {
                if (st.size() == 1) {
                    int idx = st.top();
                    ans += s.substr(idx + 1, i - idx - 1);
                }
                st.pop();
            }
        }

        return ans;
    }
};