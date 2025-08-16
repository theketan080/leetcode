class Solution {
public:
    int countGoodSubstrings(string s) {
       int n = s.length();
       unordered_map<char,int>mp;
       int i = 0;
       int j = 0;
       int count = 0;

       while(j < n){
        mp[s[j]]++;

        while(j-i+1 > 3){
           
                mp[s[i]]--;
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }
                i++;
            
        }
        if(j-i+1 == 3){
            if(mp.size() == 3){
                count++;
            }
        }

        j++;


       }


       return count;
    }
};