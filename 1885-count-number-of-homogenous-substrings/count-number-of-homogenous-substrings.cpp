class Solution {
public:
    int countHomogenous(string s) {
        int n = s.length();
        int cnt = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(i > 0 && s[i-1] == s[i]) {
                cnt++;
            }
            else {
                cnt = 1;
            }
            ans = (ans + cnt) % 1000000007;
        }
        return ans;
    }
};