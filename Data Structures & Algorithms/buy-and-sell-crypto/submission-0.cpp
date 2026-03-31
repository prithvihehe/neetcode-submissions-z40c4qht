class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = INT_MIN;
        int mn = INT_MAX;
        for(auto x: prices){
            mn = min(x, mn);
            ans = max(ans, x - mn);
        }
        return ans;
    }
};
