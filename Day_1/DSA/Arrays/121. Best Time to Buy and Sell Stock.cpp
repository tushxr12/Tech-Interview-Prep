// TC -> O(N)
// SC -> O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int maxProfit = 0;
        for(int i = 0;i < n;i++)
        {
            int currProfit = prices[i] - mini;
            maxProfit = max(maxProfit, currProfit);
            mini = min(mini, prices[i]);
        }
        return maxProfit;
    }
};
