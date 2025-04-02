class Solution {
public:

    void reverse(string &word, int end){
        int start = 0;
        while(start <= end){
            swap(word[start],word[end]);
            start++;
            end--;
        }
    }

    string reversePrefix(string word, char ch) {
        int n = word.length();

        for(int i = 0; i < n; i++){
            if(word[i] == ch){
                reverse(word,i);
                return word;
            }
            
        }
        
        return word;
    }
};