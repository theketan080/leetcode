class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        int i = 0;
        int j = 0;

        double maxAvg = -1e9;

        double sum = 0;

        while(j < n){
            sum += nums[j];

            if(j-i+1 > k){
                sum -= nums[i];
                i++;
            }

            if(j - i + 1 == k){
                double avg = sum / k;
                maxAvg = max(avg,maxAvg);
            }

            j++;
        }

        return maxAvg;
    }
};
