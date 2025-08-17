class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();

        stack<char>st;
        int pair = 0;
        int req = 0;

        for(int i = 0; i< n; i++){
            if(s[i] == '('){
                pair++;
            }
            else{
                if(pair > 0){
                    pair--;
                }else{
                    req++;
                }
            }
        }

        return pair + req;
    }
};