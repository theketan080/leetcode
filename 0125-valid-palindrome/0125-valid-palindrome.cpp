class Solution {
public:
    string toLower(string s) {
    for(char &c : s) {
        c = tolower(c);
    }
    return s;
    }

    bool isPalindrome(string s) {
        string a = toLower(s);
        
        int i = 0;
        int j = a.length()-1;

        while(i < j){

            if(!isalnum(a[i])){
                i++;
                continue;
            }

            if(!isalnum(a[j])){
                j--;
                continue;
            }

            if(a[i] != a[j]){
                return false;
            }

            i++;
            j--;

        }

        return true;
    }
};