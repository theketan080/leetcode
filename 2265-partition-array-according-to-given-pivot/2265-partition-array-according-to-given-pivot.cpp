class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();

        vector<int>ans;

        int i = 0;
        int j = 0;
        int k = 0;

        while(i < n){
            if(nums[i] < pivot){
                ans.push_back(nums[i]);
            }

            i++;
        }

        while(j < n){
            if(nums[j] == pivot){
                ans.push_back(nums[j]);
            }

            j++;
        }

        while(k < n){
            if(nums[k] > pivot){
                ans.push_back(nums[k]);
            }

            k++;
        }

        return ans;
    }
};