class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n1 = s1.length();
        int n2 = s2.length();

        unordered_map<char,int>mp;
        unordered_map<char,int>cp;

        for(auto &i:s1){
            mp[i]++;
        }

        for(int i = 0; i < n2; i++){
            string sub = s2.substr(i,n1);

            for(auto &it:sub){
                cp[it]++;
            }

            if(mp == cp){
                return true;
            }else{
                cp.clear();
            }
        }

        return false;
    }
};