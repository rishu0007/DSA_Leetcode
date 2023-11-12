class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low = 0;
        int high = s.size();
        vector<int> ans;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'I') {
                ans.push_back(low++);
            }
            else if(s[i] == 'D') {
                ans.push_back(high--);
            }
            if(i == s.size() -1) {
                if(s[i] == 'I') ans.push_back(low++);
                else ans.push_back(high--);
            }
        }
        return ans;
    }
};