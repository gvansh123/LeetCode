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
    void inorder(TreeNode* root,int &ans,TreeNode* &prev)
    {
        if(root==NULL)
        return;
        inorder(root->left,ans,prev);
         if(prev!=NULL)
         {
         ans=min(ans,abs(root->val-prev->val));
         }
         prev=root;
        inorder(root->right,ans,prev);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        int ans=INT_MAX;
        TreeNode* prev=NULL;
        inorder(root,ans,prev);
        return ans;
    }
};