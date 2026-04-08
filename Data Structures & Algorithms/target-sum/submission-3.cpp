class Solution {
public:
    int dfs(int i, vector<int> &nums, int target){
        if(target == 0 && i == nums.size()) return 1;
        if(i >= nums.size()) return 0;

        int c1 = dfs(i + 1, nums, target - nums[i]);
        int c2 = dfs(i + 1, nums, target + nums[i]);

        return c1 + c2;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans = dfs(0, nums, target);
        return ans;
    }
};
