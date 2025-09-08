class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        double avg = 0;
        long long sum  = 0;
        int count = 0;

        for(int i = 0; i < k; i++){
            sum += arr[i];
        }

        avg = (double)sum/k;

        if(avg >= threshold) count++;

        int i = 0; 
        int j = k;

        while(j < n){
            sum += arr[j];
            if(j-i+1 > k){
                sum -= arr[i];
                i++;
               
            }

            if(j-i+1 == k){
                avg = (double)sum/k;
                if(avg >= threshold) count++;
            }

            j++;


        }

        return count;
    }
};