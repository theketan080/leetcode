class Solution {
public:
    int findComplement(int num) {
        string s = "";
        while(num != 0){
            if((num&1) == 1){
                s += '0';
            }else{
                s +=  '1';
            }  

            num >>= 1; 
        }

        reverse(s.begin(),s.end());
        int ans = stoi(s,0,2);

        return ans;
    }
};