class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> tmp;
        tmp.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > tmp.back()) tmp.push_back(nums[i]);
            else{
                int a = lower_bound(tmp.begin(),tmp.end(), nums[i]) - tmp.begin();
                tmp[a] = nums[i];
            }
        }
        return tmp.size();
    }
};
