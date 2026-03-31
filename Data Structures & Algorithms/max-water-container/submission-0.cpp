class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0, r = h.size() - 1;
        int mx = INT_MIN;
        while(l < r){
            int water = (r - l)*min(h[l],h[r]);
            mx = max(mx,water);
            if(h[l] < h[r]) l++;
            else r--;
        }
        return mx;
    }
};
