class Solution {
public:

    bool isSub(string &str, string &s) {
        int i , j;
        for(i = 0, j = 0; i < s.size() && j < 3; i++) {
            if(s[i] == str[j]) j++;
        }
        return j == 3;
    }

    int countPalindromicSubsequence(string s) {
        int ans = 0;
        for(char ch = 'a'; ch <= 'z'; ch++) {
            for(char c = 'a'; c <= 'z'; c++) {
                string str;
                str += ch;
                str += c;
                str += ch;
                ans += isSub(str,s);
            }
        }
        return ans;
    }
};