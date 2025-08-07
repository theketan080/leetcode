class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();



        vector<int>ans(n,-1);

        if(n < 2*k + 1) return ans;
        long long sum = 0;
        int size = 2 * k + 1;

        for (int i = 0; i < size; i++) {
            sum += nums[i];
        }

        ans[k] = int(sum / size);

        for (int i = size; i < n; ++i) {
            sum += nums[i];
            sum -= nums[i - size];
            ans[i - k] = sum / size;
        }



        return ans;

    }
};