class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        /*
        window length = k;
        jb window lengt purra ho tb computation kro
        computation avg niakalna hai
        agr window ka size bdh ke k se jyada ho gya toh
        piche se window shrink krenge yaani sum mein se gthayenge
        agr window ka size chhota hai k se toh sirf jodo elements ko taaki woo
        avg jb condition meet ho tb nikal pye;
        */
        int i = 0;
        int j = 0;
        double avg = 0;
        double sum = 0;
        double maxAvg = INT_MIN;

        while (j < nums.size()) {
            sum += nums[j];
            if (j - i + 1 > k) {
                sum -= nums[i];
                i++;
            }

            if (j - i + 1 == k) {
                avg = sum / k;
            }
            maxAvg = max(maxAvg, avg);

            j++;
        }

        return maxAvg;
    }
};
