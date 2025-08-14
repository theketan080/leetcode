class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        double sum = 0;
        double maxAvg = -1e9; // very small number

        while (j < n) {
            sum += nums[j];

            // If window size is less than k, just expand
            if (j - i + 1 < k) {
                j++;
            }
            // When window size becomes k
            else if (j - i + 1 == k) {
                double avg = sum / k;   // calculate avg for this window
                maxAvg = max(maxAvg, avg);

                // Slide the window
                sum -= nums[i];
                i++;
                j++;
            }
        }
        return maxAvg;
    }
};
