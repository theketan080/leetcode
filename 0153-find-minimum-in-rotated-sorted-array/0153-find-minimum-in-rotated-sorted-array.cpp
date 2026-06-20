class Solution {
public:
    int findMin(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int mid = start + (end-start)/2;
        int ans = arr[0];

        while(start <= end){
            if(arr[mid] >= arr[0]){
                start = mid + 1;
            }else{
                ans = arr[mid];
                end = mid - 1;
            }
            mid = start + (end-start)/2;
        }

        return ans;
    }
};