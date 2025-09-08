class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> mp;
        unordered_map<char, int> cp;
        int i = 0;
        int j = 0;
        vector<int> ans;
        for (char ch : p) {
            mp[ch]++;
        }

        while (j < s.length()) {
        
                cp[s[j]]++;
            
            if (j - i + 1 > p.length()) {
                cp[s[i]]--;
                if (cp[s[i]] == 0)
                    cp.erase(s[i]);
                i++;
            }
            if (mp == cp && j - i + 1 == p.length()) {
                ans.push_back(i);
            }


            j++;
        }

        return ans;
    }
};