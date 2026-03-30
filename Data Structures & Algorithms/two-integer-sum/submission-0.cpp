class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++) mp[nums[i]] = i;

        for(int i = 0; i < nums.size(); i++){
            int f = target - nums[i];
            if(mp.count(f) && mp[f] != i){
                return {min(i,mp[f]), max(i,mp[f])};
            }
        }
        return {};
    }
};
