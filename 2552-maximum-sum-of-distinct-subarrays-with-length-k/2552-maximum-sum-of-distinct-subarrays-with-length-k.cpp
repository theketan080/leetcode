class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        long long sum = 0;
        long long maxSum = 0;
        unordered_map<int,int> mp;

        while(j < n){
            sum += nums[j];
            mp[nums[j]]++;  

            if(j - i + 1 > k){
                sum -= nums[i];
                mp[nums[i]]--;
                if(mp[nums[i]] == 0) mp.erase(nums[i]);
                i++;
            }

            
            if(j - i + 1 == k && mp.size() == k){
                maxSum = max(maxSum, sum);
            }

            j++;
        }

        return maxSum;
    }
};
