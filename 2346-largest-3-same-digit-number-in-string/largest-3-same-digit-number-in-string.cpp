class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
        int maxi = INT_MIN;
        string ans = "";
        int temp;
        for(int i = 0; i < n; i++) {
            if(num[i] == num[i+1]) {
                if(num[i] == num[i+2]) {
                    ans += num[i];
                    ans += num[i+1];
                    ans += num[i+2];
                }
                if(ans.size() == 3) {
                    temp = stoi(ans);
                    maxi = max(maxi,temp);
                }
                ans = "";
            }
        }
        if(maxi == INT_MIN) return "";
        if(maxi == 0) return "000";
        ans = to_string(maxi);
        return ans;
    }
};