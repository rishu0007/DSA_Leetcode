class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ans;
        for(int diaIndex = 0; diaIndex <= n+m-2; diaIndex++) {
            for(int index = 0; index <= diaIndex; index++) {
                int i = index;
                int j = diaIndex - i;
                if(diaIndex % 2 == 0) {
                    swap(i,j);
                }
                if(i >= n || j >= m) continue;
                ans.push_back(mat[i][j]);
            }
        }
        return ans;
    }
};