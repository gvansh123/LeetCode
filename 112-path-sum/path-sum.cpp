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
    bool find(TreeNode *root,int sum)
    {
        if(root==NULL)
        return false;
        if(root->left==NULL&&root->right==NULL)
        {
            if(root->val==sum)
            return true;
            return false;
        }
        bool l=find(root->left,sum-root->val);
        bool r=find(root->right,sum-root->val);
        return l|r;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return find(root,targetSum);
    }
};