class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the smaller array to minimize binary search operations
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int m = nums1.size();
        int n = nums2.size();
        int left = 0, right = m;
        int halfLen = (m + n + 1) / 2;
        
        while (left <= right) {
            int i = (left + right) / 2;  // Partition position in nums1
            int j = halfLen - i;          // Partition position in nums2
            
            if (i < m && nums2[j-1] > nums1[i]) {
                // i is too small, need to increase it
                left = i + 1;
            } else if (i > 0 && nums1[i-1] > nums2[j]) {
                // i is too big, need to decrease it
                right = i - 1;
            } else {
                // i is perfect, calculate median
                int maxLeft;
                if (i == 0) {
                    maxLeft = nums2[j-1];
                } else if (j == 0) {
                    maxLeft = nums1[i-1];
                } else {
                    maxLeft = max(nums1[i-1], nums2[j-1]);
                }
                
                if ((m + n) % 2 == 1) {
                    return maxLeft;
                }
                
                int minRight;
                if (i == m) {
                    minRight = nums2[j];
                } else if (j == n) {
                    minRight = nums1[i];
                } else {
                    minRight = min(nums1[i], nums2[j]);
                }
                
                return (maxLeft + minRight) / 2.0;
            }
        }
        
        return 0.0;
    }
};