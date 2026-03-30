class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans, p(n + 1), s(n + 1);
        p[0] = 1;
        s[n] = 1;
        for(int i = 1; i <= n; i++) p[i] = p[i - 1]*nums[i - 1];
        for(int i = n - 1; i >= 0; i--) s[i] = s[i + 1]*nums[i];

        for(int i = 0; i < n; i++){
            ans.push_back(p[i]*s[i + 1]);
        }
        return ans;
    }
};
