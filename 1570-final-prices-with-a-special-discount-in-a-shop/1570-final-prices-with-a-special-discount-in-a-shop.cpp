class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        int disc = 0;
        int buy = 0;
        vector<int>ans;
        for(int i = 0; i < n; i++){
            buy = prices[i];
            disc = 0;
            for(int j = i + 1; j < n; j++){
                if(prices[j] <= prices[i]){
                     disc = prices[j];
                     break;
                }
            }

            int final = buy - disc;
            ans.push_back(final);
        }

        return ans; 
    }
};