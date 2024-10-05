/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lca(TreeNode* root,TreeNode* a,TreeNode* b)
    {
        if(root==nullptr)
        return nullptr;
        if(root==a||root==b)
        return root;

        TreeNode* l=lca(root->left,a,b);
        TreeNode* r=lca(root->right,a,b);
        if(l!=nullptr&&r!=nullptr)
        return root;

        return (l!=nullptr)?l:r;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return lca(root,p,q);
    }
};