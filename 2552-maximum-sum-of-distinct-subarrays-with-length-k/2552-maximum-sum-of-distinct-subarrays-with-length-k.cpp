class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        int i = 0;
        int j  = 0;
        unordered_map<int,int>freq;

        long long maxSum = 0;
        long long sum = 0;

        while(j < n){

            if(freq[nums[j]] != 0){

                while(freq[nums[j]] != 0){
                    freq[nums[i]] = 0;
                    sum -= nums[i];
                    i++;
                }

            }

            sum += nums[j];
            freq[nums[j]] = 1;

            if(j-i+1 > k){
                sum -= nums[i];
                freq[nums[i]] = 0;
                i++;
            }
            if(j-i+1 == k){
                maxSum = max(maxSum,sum);
            }



            j++;
        }

        return maxSum;
    }
};
