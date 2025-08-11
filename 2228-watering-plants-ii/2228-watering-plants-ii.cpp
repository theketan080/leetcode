class Solution {
public:
    int minimumRefill(vector<int>& nums, int capacityA, int capacityB) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int a = capacityA;
        int b = capacityB;
        int refil = 0;
        while(i < j){

            if(capacityA < nums[i]){
                capacityA = a;
                refil++;
            }
            if(capacityB < nums[j]){
                capacityB = b;
                refil++;
            }

            if(capacityA >= nums[i]){
                capacityA -= nums[i];
                i++;
            }

            if(capacityB >= nums[j]){
                capacityB -= nums[j];
                j--;
            }

        }

         if (i == j) {
            if (max(capacityA, capacityB) < nums[i]) {
                refil++;
            }
        }

        return refil;
    }
};