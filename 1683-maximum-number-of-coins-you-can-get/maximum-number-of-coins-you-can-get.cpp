class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int ans = 0;
        int n = piles.size();
        int pair = n / 3;
        for(int i = pair; i < n; i += 2) {
            ans += piles[i];
        }

        return ans;
    }
};