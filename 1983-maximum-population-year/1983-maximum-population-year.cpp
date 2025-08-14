class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int,int>mp;

        int pop = 0;
        int maxPop = 0;
        int earliestYear = 0;
        for(int i = 0; i < logs.size();i++){
            mp[logs[i][0]]++;
            mp[logs[i][1]]--;
        }

            for(auto &it:mp){
                pop += it.second;

                if(pop > maxPop){
                    maxPop = pop;
                   earliestYear = it.first;
                }
            }

        return earliestYear;
    }
};