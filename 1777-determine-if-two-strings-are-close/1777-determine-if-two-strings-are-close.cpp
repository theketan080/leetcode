class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();

        if(m != n){
            return false;
        }

        vector<int>freq1(26,0);
        vector<int>freq2(26,0);

        for(char &ch:word1){
            freq1[ch-'a']++;
        }

        for(char &ch:word2){
            freq2[ch-'a']++;
        }

        for(int i = 0; i < 26; i++){
            if(freq1[i] != 0 && freq2[i] == 0 || freq1[i] == 0 && freq2[i] != 0){
                return false;
            }
        }

        sort(begin(freq1),end(freq1));
        sort(begin(freq2),end(freq2));

        if(freq1 == freq2){
            return true;
        }

        return false;
    }
};