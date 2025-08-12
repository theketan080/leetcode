class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_set<char> st = {'a', 'e', 'i', 'o', 'u'};
        int n = words.size();

        
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            char first = words[i].front();
            char last = words[i].back();
            int isVowelWord = (st.count(first) && st.count(last)) ? 1 : 0;
            prefix[i + 1] = prefix[i] + isVowelWord;
        }

        
        vector<int> ans;
        for (auto &q : queries) {
            int start = q[0];
            int end = q[1];
            ans.push_back(prefix[end + 1] - prefix[start]);
        }

        return ans;
    }
};
