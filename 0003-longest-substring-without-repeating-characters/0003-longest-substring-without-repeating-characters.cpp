class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        int i = 0;
        int j = 0;
        unordered_map<char,int>mp;
        int maxLen = 0;
        while(j < n){
            mp[s[j]]++;

            while(mp[s[j]] > 1){
                mp[s[i]]--;
                if(mp[s[i]] == 0) mp.erase(s[i]);
                i++;
            }

            maxLen = max(maxLen,j-i+1);

            j++;
        }

        return maxLen;
    }
};