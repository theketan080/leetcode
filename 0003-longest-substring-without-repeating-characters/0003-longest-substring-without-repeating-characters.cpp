class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,int>mp;

        int i = 0;
        int j = 0;
        int maxLen = INT_MIN;
        if(s.empty()){
            return 0;
        }
        while(j < n){
            mp[s[j]]++;

            while(mp[s[j]] > 1){
                mp[s[i]]--;
                if(mp[s[i]] == 0) mp.erase(s[i]);
                i++; 
            }

            maxLen = max(maxLen, (int)mp.size());
            j++;
        }

        return maxLen;
    }
};