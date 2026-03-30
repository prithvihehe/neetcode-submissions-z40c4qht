class Solution {
public:
    int memo(int i, vector<int> &nums, vector<int> &dp){
        int n = nums.size();
        if(i >= n) return 0;
        if(dp[i] != -1) return dp[i];
        int c1 = nums[i] + memo(i + 2, nums, dp);
        int c2 = memo(i + 1, nums, dp);

        return dp[i] = max(c1,c2);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() + 1, -1);
        int ans = memo(0, nums, dp);
        return ans;
    }
};
