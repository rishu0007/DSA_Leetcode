class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = INT_MIN, sum;
        for(int i = 0; i < n/2; i++) {
            sum = nums[i] + nums[n-1-i];
            ans = max(ans,sum);
        }
        return ans;
    }
};