class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int element = 1;
        for(int i = 0; i < target.size(); i++) {
            while(element != target[i]) {
                ans.push_back("Push");
                ans.push_back("Pop");
                element++;
            }
            ans.push_back("Push");
            element++;
        }
        return ans;
    }
};