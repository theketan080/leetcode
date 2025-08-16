class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;

       
        vector<int> freq(51, 0);

        int i = 0, j = 0;

        while (j < n) {
            
            if (nums[j] < 0) {
                freq[nums[j] + 50]++;
            }

            
            if (j - i + 1 > k) {
                if (nums[i] < 0) {
                    freq[nums[i] + 50]--;
                }
                i++;
            }

            
            if (j - i + 1 == k) {
                int cnt = 0;
                int beauty = 0;
                for (int v = -50; v < 0; v++) {
                    cnt += freq[v + 50];
                    if (cnt >= x) {
                        beauty = v;
                        break;
                    }
                }
                ans.push_back(beauty);
            }

            j++;
        }

        return ans;
    }
};
