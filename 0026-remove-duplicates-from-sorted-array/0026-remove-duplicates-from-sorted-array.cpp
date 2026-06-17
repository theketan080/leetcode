class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start = 0;
        int end = start + 1;

        while(end < nums.size()){
            if(nums[start] == nums[end]){
                end++;
            }else{
                start++;
                swap(nums[start],nums[end]);
                end++;
            }
        }

        return start +1 ;
    }
};