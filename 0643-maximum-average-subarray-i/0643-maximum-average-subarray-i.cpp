class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum = 0;
        
        // take sum of first k elements
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        double avg = (double)sum / k;
        double maxAvg = avg;

        int i = 0;
        int j = k;
        while(j < nums.size()){
            sum += nums[j];

            if(j - i + 1 > k){     // ✅ shrink if window exceeds k
                sum -= nums[i];
                i++;
            }

            if(j - i + 1 == k){    // ✅ window is exactly k
                avg = (double)sum / k;
                maxAvg = max(maxAvg, avg);
            }

            j++;
        }

        return maxAvg;
    }
};
