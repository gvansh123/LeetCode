/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : prev(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int inorder(TreeNode* root, int& prev, int& ans) 
    {
        if (root->left != NULL)
            inorder(root->left, prev, ans);
        if (prev >= 0) 
            ans = min(ans, root->val - prev);
        prev = root->val;
        if (root->right != NULL) 
            inorder(root->right, prev, ans);
        return ans;
    }
int getMinimumDifference(TreeNode* root) {
    auto ans = INT_MAX, prev = -1;
    return inorder(root, prev, ans);
}
};