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
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int &i,int left,int right)
    {
        if(left>right)
        return nullptr;

        int t=left;
        while(inorder[t]!=preorder[i])
        {
        t++;
        }
        i++;
        TreeNode*root=new TreeNode(inorder[t]);
        root->left=build(preorder,inorder,i,left,t-1);
        root->right=build(preorder,inorder,i,t+1,right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        int i=0;
        return build(preorder,inorder,i,0,n-1);
    }
};