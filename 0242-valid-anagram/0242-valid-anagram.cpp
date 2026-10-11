class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>sp;
        unordered_map<char,int>tp;


        for(int i = 0; i < s.length(); i++){
            sp[s[i]]++;
        }

        for(int i = 0; i < t.length(); i++){
            tp[t[i]]++;
        }

        if(sp == tp){
            return true;
        }

        return false;

    }
};