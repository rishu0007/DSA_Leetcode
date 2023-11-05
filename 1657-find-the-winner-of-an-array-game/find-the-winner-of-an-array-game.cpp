class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int curr = arr[0];
        int winCnt = 0;
        for(int i = 1; i < arr.size() && winCnt < k; i++) {
            if(arr[i] > curr) {
                curr = arr[i];
                winCnt = 0;
            }
            winCnt++;
        }
        return curr;
    }
};