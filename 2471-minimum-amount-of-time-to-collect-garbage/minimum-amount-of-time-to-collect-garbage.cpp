class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {

        int n = garbage.size();
        int ans = 0;

        for(int i = 0; i < n-1; i++) {
            ans += 3 * travel[i];
        }

        for(const string& s : garbage) {
            ans += s.length();
        }

        for(int i = n-1; i > 0; i--) {
            if(garbage[i].find("G") == -1) {
                ans -= travel[i-1];
            }
            else {
                break;
            }
        }

        for(int i = n-1; i > 0; i--) {
            if(garbage[i].find("P") == -1) {
                ans -= travel[i-1];
            }
            else {
                break;
            }
        }

        for(int i = n-1; i > 0; i--) {
            if(garbage[i].find("M") == -1) {
                ans -= travel[i-1];
            }
            else {
                break;
            }
        }

        return ans;

        // int n = garbage.size();
        // int ans = 0;

        // for (int i = 0; i < n - 1; i++) {
        //     ans += 3 * travel[i];
        // }

        // for (const string& s : garbage) {
        //     ans += s.length();
        // }

        // for (int i = n - 1; i > 0; i--) {
        //     if (garbage[i].find("G") == -1) {
        //         ans -= travel[i - 1];
        //     } else {
        //         break;
        //     }
        // }

        // for (int i = n - 1; i > 0; i--) {
        //     if (garbage[i].find("P") == -1) {
        //         ans -= travel[i - 1];
        //     } else {
        //         break;
        //     }
        // }

        // for (int i = n - 1; i > 0; i--) {
        //     if (garbage[i].find("M") == -1) {
        //         ans -= travel[i - 1];
        //     } else {
        //         break;
        //     }
        // }

        // return ans;
    }
};