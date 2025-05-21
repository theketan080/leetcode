class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int occur = n / 2;
        map<int,int>mp;

        for(auto i: nums){
            mp[i]++;
        }

        for(auto it:mp){
            if(it.second > occur){
                return it.first;
            }
        }

        return -1;
    }
};