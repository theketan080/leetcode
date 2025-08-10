class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        map<int,int>mp;
        int i = 0;
        
        while(i < m){
            mp[nums1[i]]++;
            i++;
        }

        for(int i = 0;i<n; i++){
            mp[nums2[i]]++;
        }
        
        int k  = 0;

        for(auto i:mp){
            while(i.second > 0){
                nums1[k] = i.first;
                i.second--;
                k++;
            }
        }
       

    }
};