class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int ind = 0;
        int i = 0;
        int j = n - 1;

        while(ind <= j){
            if(nums[ind] == 2){
                swap(nums[ind],nums[j]);
                j--;
            }
            else if(nums[ind] == 0){
                swap(nums[ind],nums[i]);
                i++;
                ind++;
            }
            else{
                ind++;
            }
        }
    }
};