class Solution {
public:
    bool check(int left, int right, vector<int>& nums) {
        vector<int> temp;
        for(int i = left; i <= right; i++) {
            temp.push_back(nums[i]);
        }
        sort(temp.begin(), temp.end());
        for(int i = 2; i < temp.size(); i++) {
            if(temp[i] - temp[i-1] != temp[1] - temp[0]) return false;
        }
        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size();
        int m = l.size();
        vector<bool> ans;
        for(int i = 0; i < m; i++) {
            int left = l[i];
            int right = r[i];
            ans.push_back(check(left,right,nums));
        }
        return ans;
    }
};