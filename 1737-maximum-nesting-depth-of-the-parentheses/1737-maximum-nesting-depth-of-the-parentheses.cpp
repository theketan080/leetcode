class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int depth = 0;
        int maxDepth = INT_MIN;
        for(int i = 0; i<s.length();i++){
            if(s[i] == '('){
                st.push(s[i]);
                depth++;
            }else{
                if(s[i] == ')'){
                    st.pop();
                    depth--;
                    
                }
            }
            maxDepth = max(maxDepth, depth);
        }

        return maxDepth;
    }
};