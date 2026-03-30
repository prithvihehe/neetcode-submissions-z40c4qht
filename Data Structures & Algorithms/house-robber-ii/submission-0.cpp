class Solution {
public:
    int memo(int i,int end, vector<int> &nums, vector<int> &dp){
        if(i > end) return 0;
        if(dp[i] != -1) return dp[i];
        int c1 = nums[i] + memo((i + 2),end, nums, dp);
        int c2 = memo((i + 1),end, nums, dp);

        return dp[i] = max(c1,c2);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();          
        if (n == 1) return nums[0];

        vector<int> dp1(n, -1);       
        vector<int> dp2(n, -1);

        return max(memo(0, n - 2, nums, dp1),
                   memo(1, n - 1, nums, dp2));
    }
};
