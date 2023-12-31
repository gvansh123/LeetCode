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
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v1;
        if (root == nullptr) {
          return v1;
        }
        vector<int> v2;
        if (root->left != nullptr) {
            v1 = inorderTraversal(root->left);
        }
        if (root->right != nullptr) {
            v2 = inorderTraversal(root->right);
        }
        v1.push_back(root->val);
        v1.insert(v1.end(), v2.begin(), v2.end());
        return v1;
    }
};