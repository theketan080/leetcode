class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.length();

        unordered_map<string,int>mp;
        if(n < k) return false;
        int i = 0;

        for(int i = 0; i <= n-k; i++){
            mp[s.substr(i,k)]++;
        }

        if(mp.size() == pow(2,k)) return true;

        return false;
    }
};