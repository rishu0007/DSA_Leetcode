class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,0);
        for(int i = 1; i < n; i++) {
            res[0] += (nums[i] - nums[0]);
        }
        for(int j = 1; j < n; j++) {
            res[j] = res[j-1] + (nums[j] - nums[j-1]) * j - (nums[j] - nums[j-1]) * (n-j);
        }
        return res;
    }
};