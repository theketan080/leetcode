class Solution {
public:
    
    bool check(vector<int>& nums) {
        int x = 1;
        vector<int>ans(nums.size());
        
        if(is_sorted(nums.begin(),nums.end())){
            return true;
        }

        vector<int>modi = nums;
        sort(modi.begin(),modi.end());
        int n = modi.size();

        while(x < nums.size()){

            for(int i =0; i < nums.size(); i++){
                ans[i] = modi[(i+x)%n];
            }
            x++;
            if(ans == nums) return true;
            
        }
        
        for(int i =0 ; i < nums.size(); i++){
            cout<<ans[i]<<" ";
        }
        return false;
    }
};