class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        map<int,int>mp;

        vector<vector<int>>ans;

        for(int i = 0; i<n1;i++){
            int id = nums1[i][0];
            int val = nums1[i][1];

            mp[id]+= val;
        }

        for(int j = 0; j < n2;j++){
            int id = nums2[j][0];
            int val = nums2[j][1];

            mp[id]+= val;
        }

        for(auto & i:mp){
            ans.push_back({i.first,i.second});
        }

        return ans;
    }

};