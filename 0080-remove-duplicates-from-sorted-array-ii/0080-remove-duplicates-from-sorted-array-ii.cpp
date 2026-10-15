class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto &it:mp){
            if(it.second > 2){
                int i = 1;
                while(i <= 2){
                    ans.push_back(it.first);
                    i++;
                }
                
            }else{
                while(it.second != 0){
                    ans.push_back(it.first);
                    it.second--;
                }
            }
        }

        for(int i =0; i < ans.size(); i++){
            nums[i] = ans[i];
        }

        return ans.size();
    }
};