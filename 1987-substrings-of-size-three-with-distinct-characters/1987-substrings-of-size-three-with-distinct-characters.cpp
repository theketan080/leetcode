class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length();

        unordered_map<char,int>mp;
        int count = 0;

        int i = 0;
        int j = 0;

        while(j < n){
            mp[s[j]]++;

            if(j-i+1 > 3){
                mp[s[i]]--;
                if(mp[s[i]] == 0)mp.erase(s[i]);
                i++;
            }
            while(mp[s[j]] > 1){
                mp[s[i]]--;
                if(mp[s[i]] == 0) mp.erase(s[i]);
                i++;
            }

            if(j-i+1 == 3 && mp.size() == 3){
                count++;
            }
            j++;
        }
        return count;
    }
};