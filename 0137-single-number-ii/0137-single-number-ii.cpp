class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
      
        int ans = 0;
        for(int i = 0; i < 32; i++){
            int zeroCount = 0;
            int oneCount = 0;
            for(int j = 0; j < n; j++){
                if(nums[j] & (1<<i)==0)zeroCount++;
                if(nums[j] & (1<<i))oneCount++;
            }

            if(oneCount % 3){
                ans = (ans | (1<<i));
            }        
        }

        return ans;
    }
};