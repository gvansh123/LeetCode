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
    void solve(TreeNode *root,vector<string>&ans, string c)
    {
        if(root==NULL)
        return ;
        if(root->left==NULL&&root->right==NULL)
        {
            c=c+to_string(root->val);
            ans.push_back(c);
            return;
        }
        c=c+to_string(root->val)+"->";
        solve(root->left,ans,c);
        solve(root->right,ans,c);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string temp="";
        solve(root,ans,temp);
        return ans;

    }
};