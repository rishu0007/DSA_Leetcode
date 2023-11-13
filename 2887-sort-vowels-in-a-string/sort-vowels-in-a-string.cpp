class Solution {
public:
    string sortVowels(string s) {
        int n = s.size();
        string ans(n,'*');
        string temp = "";
        for(int i = 0; i < n; i++) {
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
                temp += s[i];
            }
            else {
                ans[i] = s[i];
            }
        }
        sort(temp.begin(),temp.end());
        int ptr = 0;
        for(int i = 0; i < n; i++) {
            if(ans[i] == '*') {
                ans[i] = temp[ptr++];
            }
        }
        return ans;
    }
};