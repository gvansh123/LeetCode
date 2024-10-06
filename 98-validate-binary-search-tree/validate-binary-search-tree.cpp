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
    bool find(TreeNode *root,long mx,long mn)
    {
        if(root==NULL)
         return true;

        if((long)root->val>=mx||(long)root->val<=mn)
        return false;

        return find(root->left,root->val,mn)&&find(root->right,mx,root->val);
    }
    bool isValidBST(TreeNode* root) {
        return find(root,LONG_MAX,LONG_MIN);
    }
};