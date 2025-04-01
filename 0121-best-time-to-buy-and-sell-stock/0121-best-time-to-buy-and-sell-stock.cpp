class Solution {
public:
    void prof(vector<int>& prices, int i, int& minSpend, int& maxProf)
{
    if(i == prices.size()){
        return;
    }

    if(prices[i] < minSpend){
        minSpend = prices[i];
    }
    int total = prices[i] - minSpend;

    if(total > maxProf){
        maxProf = total;
    }

    prof(prices, i+1, minSpend, maxProf);
}
    int maxProfit(vector<int>& prices) {
        int minSpend = INT_MAX;
        int maxProf = INT_MIN;

        prof(prices,0,minSpend,maxProf);
        return maxProf;
    }
};