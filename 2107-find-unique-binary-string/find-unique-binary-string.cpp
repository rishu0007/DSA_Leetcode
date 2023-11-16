class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";
        int i = 0;
        for(string it : nums) {
            if(it[i] == '1') {
                ans += '0';
            }
            else {
                ans += '1';
            }
            i++;
        }
        return ans;
    }
};