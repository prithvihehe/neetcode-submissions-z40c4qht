class Solution {
public:
    int memo(int i, int n, vector<int> &dp){
        if(i > n) return 0;
        if(i == n) return 1;
        if(dp[i] != -1) return dp[i];

        int c1 = memo(i + 1, n, dp);
        int c2 = memo(i + 2, n, dp);
        dp[i] = c1 + c2;
        return dp[i];
    }
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        int ans = memo(0,n, dp);
        return ans;
    }
};
