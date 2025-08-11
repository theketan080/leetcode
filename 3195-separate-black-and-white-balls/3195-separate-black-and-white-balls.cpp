class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.length();
        int oneCount = 0;
        long long steps = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                oneCount++;
            }
            else{
                steps += oneCount;
            }
        }

        return steps;

    
    }
};