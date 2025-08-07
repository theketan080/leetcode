class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.length();

        set<string>visited;

        int i = 0;
        while (i <= n - k) {
            string sub = s.substr(i, k); 
            visited.insert(sub);
            i++;
        }

        if(visited.size() == pow(2,k)){
            return true;
        }

        return false;
    }
};