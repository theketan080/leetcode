class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s;

        for(int i = 0; i < nums1.size(); i++){
            int find = nums1[i];

            for(int j = 0; j < nums2.size(); j++){
                if(find == nums2[j]){
                    s.insert(find);
                    break;
                }
            }
        }

        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};