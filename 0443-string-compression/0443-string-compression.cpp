class Solution {
public:
    int compress(vector<char>& chars) {

        int i = 0;
        int write = 0;

        while(i < chars.size()) {

            char ch = chars[i];
            int count = 0;

            while(i < chars.size() && chars[i] == ch) {
                count++;
                i++;
            }

            chars[write++] = ch;

            if(count > 1) {

                string s = to_string(count);

                for(int j = 0; j < s.length(); j++) {
                    chars[write++] = s[j];
                }
            }
        }

        return write;
    }
};