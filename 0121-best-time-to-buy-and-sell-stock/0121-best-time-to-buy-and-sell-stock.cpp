class Solution {
public:
    void prof(vector<int>& prices, int& minSpend, int& maxProf) {

        for(int i = 1; i < prices.size(); i++){
            int profit = prices[i] - minSpend;
            maxProf = max(maxProf,profit);
            minSpend = min(minSpend,prices[i]);
        }
    }

    int maxProfit(vector<int>prices){
        int minSpend = prices[0];
        int maxProf = 0;

        prof(prices, minSpend,maxProf);

        return maxProf;
    }
    
};