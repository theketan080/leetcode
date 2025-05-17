class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int index=0;
        int i = 0;
        int j = size - 1;
        while(index<=j)
        {
            if(nums[index]==0)
            {
                swap(nums[index],nums[i]);
                i++;
                index++;
            }
            else if(nums[index]==2)
            {
                swap(nums[index],nums[j]);
                j--;
            }
            else{
                index++;
            }

        }
       
    }
};