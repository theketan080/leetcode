class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = s.length();
        int count = 0;

        for(int i = 0; i < n; i++){
            if(count == k){
                return s.substr(0,i-1);
            }

            if(s[i] == ' '){
                count++;
            }
        }

        return s;
    }
};