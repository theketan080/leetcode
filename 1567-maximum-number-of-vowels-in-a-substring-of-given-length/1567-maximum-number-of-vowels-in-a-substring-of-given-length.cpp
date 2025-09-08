class Solution {
public:
    bool isVowel(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            return true;

        return false;
    }

    int maxVowels(string s, int k) {
        int n = s.length();
        int maxVowel = 0;
        int count = 0;

        for (int i = 0; i < k - 1; i++) {
            if (isVowel(s[i]))
                count++;
        }
        maxVowel = count;

        int i = 0;
        int j = k-1;

        while (j < s.length()) {
            if (isVowel(s[j]))
                count++;

            maxVowel = max(maxVowel, count);

            if (j - i + 1 >= k) {
                if (isVowel(s[i]))
                    count--;
                i++;
            }
            j++;
        }

        return maxVowel;
    }
};