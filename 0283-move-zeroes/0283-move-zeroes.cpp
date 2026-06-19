class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0;
        int nonZero = zero + 1;

        while(nonZero < nums.size()){
            if(nums[zero] == 0 && nums[nonZero] != 0){
                swap(nums[zero],nums[nonZero]);
                zero++;
                nonZero++;
            }else if(nums[zero] != 0 && nums[nonZero] != 0){
                zero++;
                swap(nums[zero],nums[nonZero]);
                
                nonZero++;
            }else{
                nonZero++;
            }
        }
    }
};