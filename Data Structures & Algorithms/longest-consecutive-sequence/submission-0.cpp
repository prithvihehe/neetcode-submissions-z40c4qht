class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_set<int> store(nums.begin(),nums.end());
        for(auto x: nums){
            int streak = 0, curr = x;
            while(store.find(curr) != store.end()){
                streak++;
                curr++;
            }
            res = max(res,streak);
        }
        return res;
    }
};
