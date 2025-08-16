class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), m = p.size();
        if (n < m) return {};

        unordered_map<char,int> mp;
        for (auto &ch : p) mp[ch]++;

        unordered_map<char,int> window;
        vector<int> ans;

        int i = 0;
        for (int j = 0; j < n; j++) {
            window[s[j]]++;

           
            if (j - i + 1 > m) {
                window[s[i]]--;
                if (window[s[i]] == 0) window.erase(s[i]);
                i++;
            }

            
            if (j - i + 1 == m && window == mp) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
