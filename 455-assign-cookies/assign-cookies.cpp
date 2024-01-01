class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int m = s.size();
        if(m == 0) return 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = n-1, j = m-1;
        int ans = 0;

        while(i >= 0 && j >= 0) {
            if(s[j] >= g[i]) {
                ans++;
                j--;
                i--;
            } 
            else {
                i--;
            }
        }
        return ans;

        // unordered_map<int,bool> um;

        // for(int i = 0; i < m; i++) {
        //     um[i] = false;
        // }

        // int ans = 0;
        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < m; j++) {
        //         if((s[j] >= g[i]) && (um[j] == false)) {
        //             ans++;
        //             um[j] = true;
        //             break;
        //         }
        //     }
        // }
        // return ans;
    }
};