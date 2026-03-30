class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int> ans;
        int l = 0, r = a.size() - 1;
        while(l < r){
            if(a[l] + a[r] > target) r--;
            else if(a[l] + a[r] < target) l++;
            else{
                ans = {l + 1,r + 1};
                break;
            }
        }
        return ans;
    }
};
