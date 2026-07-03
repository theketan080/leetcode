class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>check(256,0);
        int i = 0;
        int j = 0;
        int len = 0;

        while(j < s.length()){
            if(check[s[j]] == 0){
                check[s[j]] = 1;
                len = max(len,j-i+1);
                j++;
            }else{
                while(check[s[j]] != 0){
                    check[s[i]] = 0;
                    i++;
                }
            }
        }

        return len;
    }
};