class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n = s.length();
        unordered_map<int,int>mp;
        long long ans = 0;
        int i = 0;
        for(int j = 0 ; j < n;j++){

        mp[s[j]]++;
        
        while(mp['0'] > k && mp['1'] > k){
            mp[s[i]]--;
            i++;
        }

        ans += (j-i+1);
        }

        
        return ans;
    }
};