#include <bits/stdc++.h>

class Solution {
public:
    int dp[101][5001];
    int dfs(int i, vector<int> &coins, int sum){
        if(sum == 0) return 1;
        if(i >= coins.size()) return 0;
        if(sum < 0) return 0;

        if(dp[i][sum] != -1) return dp[i][sum];

        int c1 = dfs(i, coins, sum - coins[i]);
        int c2 = dfs(i + 1, coins, sum);

        return dp[i][sum] = c1 + c2;
    }
    int change(int amount, vector<int>& coins) {
        memset(dp, -1, sizeof(dp));
        int ans = dfs(0, coins, amount);
        return ans;
    }
};
