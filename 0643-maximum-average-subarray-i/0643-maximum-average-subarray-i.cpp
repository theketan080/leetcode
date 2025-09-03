class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum = 0;
        
        //subarray length is equal to k
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }

        double avg = (double)sum / k;
        double maxAvg = avg;
        //max avg value 
        int i = 0;
        int j = k;
        while(j < nums.size()){
            sum += nums[j];

            if(j-i+1 > k){
                sum -= nums[i];
                i++;
            }
            if(j-i+1 == k){
                avg = (double)sum/k;
                maxAvg = max(maxAvg,avg);
            }

            j++;
        }

        return maxAvg;
    }
};
