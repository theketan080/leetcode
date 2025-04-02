class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = INT_MIN;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                for(int k = j + 1; k < n; k++){
                    long long sum = (long long)(nums[i] - nums[j]) * nums[k];
                    ans = max(ans,sum);
                }
            }
        }

        if(ans < 0){
            return 0;
        }

        return ans;
    }
};