class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxAvg = INT_MIN;
        double avg = 0;
        long long sum = 0;
       
        // First window sum
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        avg = (double)sum / k;
        maxAvg = max(maxAvg, avg);

        int i = 0;
        int j = k; // ✅ FIXED: was k+1

        while (j < n) {
            sum += nums[j];

            if (j - i + 1 > k) {
                sum -= nums[i];
                i++;
            }

            if (j - i + 1 == k) {
                avg = (double)sum / k;
                maxAvg = max(maxAvg, avg);
            }

            j++;
        }

        return maxAvg;
    }
};
