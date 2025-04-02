class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();

        int sum = 0;
        int product = 1;

        for(int i = 0; i < n; i++){
            char ch = s[i];
            int pro = ('z'-ch) + 1;
            product = pro*(i+1);
            
            sum += product;
        }

        return sum;
    }
};