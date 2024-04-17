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

    void solve(TreeNode * root, string &res , string s){

        if(root==NULL)return;

        if(root->left==NULL && root->right==NULL){
            s+='a'+root->val;
            string str = s;
            reverse(str.begin(),str.end());
            if(str<res){
                res = str;
            }

            return;
        }
        s+='a'+root->val;
        solve(root->left, res,s);
        solve(root->right, res,s);


    }
    string smallestFromLeaf(TreeNode* root) {
        string res = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
        string s = "";

        solve(root, res, s);
        return res;

    }
};