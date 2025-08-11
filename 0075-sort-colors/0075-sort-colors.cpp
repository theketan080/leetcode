class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int replace = 0;

        while(replace <= j){
            if(nums[replace] == 0){
                swap(nums[replace],nums[i]);
                i++;
                replace++;
            }
            else if(nums[replace] == 2){
                swap(nums[replace],nums[j]);
                j--;
            }else{
                replace++;
            }
        }
    }
};