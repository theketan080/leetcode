class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int i = 0;
        int j = 0;

        int zeroCount = 0;
        int maxLength = INT_MIN;

        while(j < n){

            if(nums[j] == 0){
                zeroCount++;
            }


            if(zeroCount > k){
                while(zeroCount > k){
                if(nums[i] == 0){
                    zeroCount--;
                }
                i++;

                }
            }

                maxLength = max(maxLength, j-i+1);


            j++;
        }

        return maxLength;
    }
};