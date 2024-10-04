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
    TreeNode* build(vector<int>&preorder, int px, int py, vector<int> &inorder,int ix, int iy, map<int,int> &m){
        if(px>py || ix>iy) return NULL;
        TreeNode* root = new TreeNode(preorder[px]);
        int inRoot = m[root->val];
        int numsLeft = inRoot-ix;
        
        root->left = build(preorder,px+1,px+numsLeft,inorder,ix,inRoot-1,m);
        root->right = build(preorder,px+numsLeft+1,py,inorder,inRoot+1,iy,m);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> m;
        for(int i=0;i<inorder.size();i++)
        {
            m[inorder[i]]=i;
        }
        return build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,m);
    }
};