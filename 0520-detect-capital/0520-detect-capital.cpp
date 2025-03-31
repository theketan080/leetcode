class Solution {
public:
    bool capi(string word){
        for(auto &ch: word){
            if(ch < 'A' || ch > 'Z'){
                return false;
            }

            
        }
        return true;
    }

    bool sml(string word){
        for(auto &ch: word){
            if(ch < 'a' || ch > 'z'){
                return false;
            }

            
        }

        return true;
    }
    bool detectCapitalUse(string word) {
        if(capi(word) || sml(word) || sml(word.substr(1))){
            return true;
        }

        return false;
    }
};