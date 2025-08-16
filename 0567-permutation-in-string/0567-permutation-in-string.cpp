class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();

        int i = 0;
        int j = 0;

        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(auto &it:s1){
            mp1[it]++;
        }

        while(j < n2){
            mp2[s2[j]]++;

            if(j-i+1 > n1){
                mp2[s2[i]]--;
                if(mp2[s2[i]] == 0){
                    mp2.erase(s2[i]);
                }
                i++;
            }

            if(j-i+1 == n1){
                if(mp1 == mp2){
                    return true;
                }
            }

            j++;
        }

        return false;

    }
};