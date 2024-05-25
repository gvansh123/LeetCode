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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)
        return 0;
        int lvl=1;
        int mx=INT_MIN;
        int curr=0;
        int ans=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int j=q.size();
            curr=0;
            for(int i=0;i<j;i++)
            {
               auto x=q.front();
               curr+=x->val;
               if(x->left)
               q.push(x->left);
               if(x->right)
               q.push(x->right);
               q.pop();
            }
            if(curr>mx){
            mx=curr;
            ans=lvl;
            }
            lvl++;
        }
        return ans;
    }
};