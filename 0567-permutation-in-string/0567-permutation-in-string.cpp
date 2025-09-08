class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        unordered_map<char,int>mp;
        unordered_map<char,int>cp;

        for(char ch:s1){
            mp[ch]++;
        }

        int i = 0;
        int j = 0;

        while(j < s2.length()){
            cp[s2[j]]++;
        if(j-i+1 > m){
            cp[s2[i]]--;
            if(cp[s2[i]] == 0) cp.erase(s2[i]);
            i++;
        }

        if(j-i+1 == m){
            if(mp == cp){
                return true;
            }
        }

        j++;
        }

        return false;
    }
};