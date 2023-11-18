class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int left = 0;
        int ans = INT_MIN;
        long long curr = 0;
        for(int right = 0; right < n; right++) {
            curr += nums[right];
            while((static_cast<long long>(right - left + 1)) * nums[right] > curr + k) {
                curr -= nums[left++];
            }
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};