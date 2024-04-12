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
    int pathSum(TreeNode* root, int targetSum) {
        return pathSum(root,targetSum, 0);
    }
    int pathSum(TreeNode* root, long long targetSum, int connect){
        if(root==NULL){
            return 0;
        }
        long current=0;
        if(root->val==targetSum ){
            current=1;
        }       
        int leftI = pathSum(root->left, targetSum-root->val, 1);
        int rightI = pathSum(root->right, targetSum-root->val, 1);
        if(connect == 0){
            int left = pathSum(root->left, targetSum, 0);
            int right = pathSum(root->right, targetSum, 0);
            return left+leftI+right+rightI+current;
        }
        else{
            return leftI+rightI+current;
        }
    }
  
};