class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();

        int totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        if (k == n) return totalSum;

        int i = 0;
        int j = 0;
        int sum = 0;

       
        for (j = 0; j < n - k; j++) {
            sum += nums[j];
        }

        int minSum = sum;  

        
        while (j < n) {
            sum += nums[j] - nums[i];
            minSum = min(minSum, sum);
            i++;
            j++;
        }

        return totalSum - minSum;  
    }
};
