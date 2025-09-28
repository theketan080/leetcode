class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = s.length();
        int n = p.length();

        unordered_map<char,int>mp;
        unordered_map<char,int>cp;

        for(int i = 0; i < n; i++){
            mp[p[i]]++;
        }

        int i = 0;
        int j = 0;
        vector<int>ans;

        while(j < m){
            cp[s[j]]++;

            if(j-i+1 > n){
                    cp[s[i]]--;
                    if(cp[s[i]]==0)cp.erase(s[i]);
                    i++;
            }

            if(j-i+1 == n && mp == cp){
                ans.push_back(i);
            }


            j++;
        }

        return ans;
    }
};