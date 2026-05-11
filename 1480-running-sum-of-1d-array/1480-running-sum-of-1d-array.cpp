class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int>runningum;

        for(int i = 0; i < nums.size(); i++){
            runningum.push_back(sum + nums[i]);
            sum += nums[i];
        }

        return runningum;
    }
};