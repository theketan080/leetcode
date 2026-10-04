class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;

        for(int i = 1; i <= nums.size(); i++){
            sum += i;
        }

        int actual = 0;

        for(int i = 0; i < nums.size(); i++){
            actual += nums[i];
        }


        return sum - actual;
    }
};