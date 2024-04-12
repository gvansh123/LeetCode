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
    void solve(TreeNode *root,int &t,int prev)
    {
        if(root==NULL)
            return;
        
        prev=max(prev,root->val);

        solve(root->left,t,prev);
        if(root->val>=prev)
        t++;
        solve(root->right,t,prev);
    }
    int goodNodes(TreeNode* root) {
        int t=0;
        int x=-1e5;
        solve(root,t,x);
        return t;
    }
};