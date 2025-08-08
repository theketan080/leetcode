class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int n = s.length();
        unordered_map<char, int> mp;
        unordered_map<string, int> cp;

        int i = 0, j = 0;

        while (j < n) {
            mp[s[j]]++;

           
            if (j - i + 1 > minSize) {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                    mp.erase(s[i]);
                i++;
            }

            
            if (j - i + 1 == minSize && mp.size() <= maxLetters) {
                string sub = s.substr(i, minSize);
                cp[sub]++;
            }

            j++;
        }

        int maxAns = 0;
        for (auto &it : cp) {
            maxAns = max(maxAns, it.second);
        }

        return maxAns;
    }
};
