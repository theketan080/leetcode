class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();

        int i = 0;
        int j = 0;
        int count = 0;
        int maxCount = INT_MIN;
        while (j < n) {

            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' ||
                s[j] == 'u') {
                count++;
            }

            if (j - i + 1 > k) {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                    s[i] == 'u') {
                    count--;
                }
                i++;
            }
            if (j - i + 1 == k) {
                maxCount = max(maxCount, count);
            }

            j++;
        }

        return maxCount;    
    }
};