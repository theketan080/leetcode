class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int i = 0;
        int j = 0;

        unordered_map<int,int>mp;
        int maxLength = INT_MIN;

        while(j < n){

            if(nums[j] == 0){
                mp[nums[j]]++;
            }


            if(mp[nums[j]] > k){
                while(mp[nums[j]] > k){
                if(nums[i] == 0){
                    mp[nums[i]]--;
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