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
    bool sameTree(TreeNode* p,TreeNode* q)
    {
        if(p==NULL&&q==NULL)
        return true;
        if(p==NULL||q==nullptr||p->val!=q->val)
        return false;

        return sameTree(p->left,q->right)&&sameTree(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)
        return true;

        return sameTree(root->left,root->right);
    }
};