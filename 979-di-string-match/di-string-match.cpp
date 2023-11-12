class Solution {
public:
    vector<int> diStringMatch(string s) {
        // whenever we encounter I, we have to push lower value and if we encounter D, we have     to push heigher value but the range of lower and heigher will be from [0 to s.size]
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