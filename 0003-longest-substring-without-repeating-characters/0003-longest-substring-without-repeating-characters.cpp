class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        /*
        hm sbse pehle first letter pe ayenge and usko hm map ke andr daalenge
        quki woo hmare window ke andr hai. fir hm aage bdhenge but daalne se
        pehle yeh check krenge kya woo hmare map mein already hai toh nhi agr
        hai toh pehle usko htayenge fir aage bdhenge
        */
        unordered_map<char, int> mp;
        int i = 0;
        int j = 0;
        int maxLength = INT_MIN;
        while (j < s.length()) {
            mp[s[j]]++;
            while(mp[s[j]] > 1){
                mp[s[i]]--;
                if(mp[s[i]] == 0) mp.erase(s[i]);
                i++;
            }
            maxLength = max(maxLength, j - i + 1);
            j++;
        }
        return maxLength== INT_MIN ? 0: maxLength ;
    }
};