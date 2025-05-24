class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
       int n = words.size();
       vector<int>arr;
       for(int i = 0; i < n; i++){
        int m = words[i].length();
        string s = words[i];
        if(s.find(x) != string::npos){
            arr.push_back(i);
        }
       }

       return arr;
    }
};