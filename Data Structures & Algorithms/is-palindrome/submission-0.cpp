class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(auto x: s){
            if(isalnum(x)) t += tolower(x);
        }
        cout << t << endl;
        int l = 0;
        int r = t.size() - 1;
        while(l < r){
            if(t[l] != t[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
