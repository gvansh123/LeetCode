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
  #define vvi vector<vector<int>>
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vvi ans;
        if(root==NULL)
        return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool lTor=true;
        while(!q.empty())
        {
            int n=q.size();
            vector<int> v(n);
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(lTor)
                v[i]=temp->val;
                else
                v[n-i-1]=temp->val;

                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
            lTor=!lTor;
            ans.push_back(v);
        }
        return ans;
    }
};