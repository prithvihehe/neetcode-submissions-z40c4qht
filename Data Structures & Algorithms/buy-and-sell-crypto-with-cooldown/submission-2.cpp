#include <bits/stdc++.h>
class Solution {
public:
    int dp[5001][2];
    int dfs(int i, vector<int> &prices, bool bought){
        if(i >= prices.size()) return 0;
        if(dp[i][bought] != -1) return dp[i][bought];

        int profit = 0;
        if(!bought){
            int c1 = -prices[i] + dfs(i + 1, prices, true);
            int c2 = dfs(i + 1 , prices, false);
            profit = max(c1,c2);
        }
        else{
            int c1 = prices[i] + dfs(i + 2, prices, false);
            int c2 = dfs(i + 1, prices, true);
            profit = max(c1,c2);
        }

        return dp[i][bought] = profit;
    }
    int maxProfit(vector<int>& prices) {
        memset(dp, -1, sizeof(dp));
        int ans = dfs(0, prices, false);
        return ans;
    }
};
