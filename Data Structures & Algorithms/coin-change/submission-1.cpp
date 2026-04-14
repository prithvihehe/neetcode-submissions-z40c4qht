#include <bits/stdc++.h>

class Solution {
public:
    int dp[11][10001];
    int dfs(int i, vector<int> &coins, int amount){
        if(i >= coins.size()) return 1e9;
        if(amount == 0) return 0;
        if(amount < 0) return 1e9;
        
        if(dp[i][amount] != -1)
            return dp[i][amount];

        int c1 = 1 + dfs(i, coins, amount - coins[i]);
        int c2 = dfs(i + 1, coins, amount);

        return dp[i][amount] = min(c1,c2);
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int ans = dfs(0, coins, amount);
        if(ans == 1e9) return -1;
        return ans;
    }
};
