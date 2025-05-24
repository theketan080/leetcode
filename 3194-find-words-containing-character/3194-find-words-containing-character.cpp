class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
       int n = words.size();
       vector<int>arr;
       for(int i = 0; i < n; i++){
        int m = words[i].length();
        string s = words[i];
        for(int j = 0; j < m; j++){
            if(s[j] == x){
                arr.push_back(i);
                break;
            }
        }
       }

       return arr;
    }
};