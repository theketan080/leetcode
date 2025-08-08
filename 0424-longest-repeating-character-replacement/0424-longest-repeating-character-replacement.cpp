class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        unordered_map<char,int>mp;

        int i = 0;
        int j = 0;

        int max_count = INT_MIN;
        int length = 0;


        while(j < n){

            mp[s[j]]++;

            max_count = max(max_count,mp[s[j]]);

            while((j - i +1 )- max_count > k){
                mp[s[i]]--;
                i++;
            }

            length = max(length, j-i+1);
            j++;

        }

        return length;
    }
};