#include <bits/stdc++.h>
class Solution {
public:
    int dp[21][1000];
    int dfs(int i, vector<int> &nums, int target){
        if(target == 0 && i == nums.size()) return 1;
        if(i >= nums.size()) return 0;
        if(dp[i][target] != -1) return dp[i][target];

        int c1 = dfs(i + 1, nums, target - nums[i]);
        int c2 = dfs(i + 1, nums, target + nums[i]);

        return dp[i][target] = c1 + c2;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        memset(dp, -1, sizeof(dp));
        int ans = dfs(0, nums, target);
        return ans;
    }
};
