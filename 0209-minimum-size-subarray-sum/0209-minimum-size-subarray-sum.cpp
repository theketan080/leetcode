class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        /*
        mininmum window length dena hai jiski value target se bdi yaa equal ho.
        hm computation krenge jb hmare window ka sum greater than or equal to ho jye target ke tb 
        hm computation mein window ka length ko minLength ke andr store kra denge
        
        
        */
        int i= 0;
        int j = 0;
        int minLength = INT_MAX;
        int sum = 0;
        while(j < nums.size()){
            sum += nums[j];
        while(sum >= target){
            minLength = min(minLength,j-i+1);
            sum -= nums[i];
            i++;
        }
        j++;
        }

        return (minLength==INT_MAX ? 0: minLength);
        
    }
};