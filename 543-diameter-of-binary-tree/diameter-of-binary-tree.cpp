/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int height(TreeNode* root) {
        // base case
        if(root == NULL)
            return 0;
        int left = height(root -> left);
        int right = height(root -> right);
        int ans = max(left, right) + 1;
        return ans;
    }

public:
    pair<int,int> diameterFast(TreeNode* root) {
        // base case
        if(root == NULL) {
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        pair<int,int> left = diameterFast(root -> left);
        pair<int,int> right = diameterFast(root -> right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second;
        
        pair<int,int> ans;
        ans.first = max(op1, max(op2,op3));
        ans.second = max(left.second, right.second) + 1;
        return ans;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        return diameterFast(root).first;
        
        
        // // first Method, it takes O(n^2) time complexity
        
        // // base case
        // if(root == NULL) 
        //     return 0;
        // int opt1 = diameterOfBinaryTree(root -> left);
        // int opt2 = diameterOfBinaryTree(root -> right);
        // int opt3 = height(root -> left) + height(root -> right);
        
        // int ans = max(opt1, max(opt2,opt3));
        // return ans;
        

    }
};