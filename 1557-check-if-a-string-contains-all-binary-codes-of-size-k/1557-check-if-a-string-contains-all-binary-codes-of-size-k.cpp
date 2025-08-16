class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.length();

        long long power = 0;

        power = pow(2,k);

        unordered_set<string>st;

        int i = 0;

        while(i <= n-k){
            string sub = s.substr(i,k);
            st.insert(sub);

            if(st.size() == power){
                return true;
            }
            i++;
        }

        return false;
    }
};