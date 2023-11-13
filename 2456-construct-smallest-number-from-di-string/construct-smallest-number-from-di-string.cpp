class Solution {
public:
    string smallestNumber(string pattern) {
        stack<int> st;
        int n = pattern.size();
        string ans = "";
        int val = 1;
        for(int i = 0; i < n; i++) {
            if(pattern[i] == 'D') {
                st.push(val++);
            }
            if(pattern[i] == 'I') {
                st.push(val++);
                while(!st.empty()) {
                    ans += st.top() + '0';
                    st.pop();
                }
            }
        }
        st.push(val);
        while(!st.empty()) {
            ans += st.top() + '0';
            st.pop();
        }
        return ans;
    }
};