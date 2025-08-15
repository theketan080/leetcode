class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int base = 0; 

       
        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                base += customers[i];
            }
        }

        int extra = 0, maxExtra = 0;
        int i = 0, j = 0;

        while (j < n) {
            if (grumpy[j] == 1) {
                extra += customers[j];
            }

            if (j - i + 1 > minutes) {
                if (grumpy[i] == 1) {
                    extra -= customers[i];
                }
                i++;
            }

            if (j - i + 1 == minutes) {
                maxExtra = max(maxExtra, extra);
            }

            j++;
        }

        return base + maxExtra;
    }
};
