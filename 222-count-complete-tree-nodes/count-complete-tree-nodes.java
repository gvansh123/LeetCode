/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int height(TreeNode root)
    {
        int c=0;
        while(root!=null)
        {
            c++;
            root=root.left;
        }
        return c;
    }
    int rheight(TreeNode root)
    {
        int c=0;
        while(root!=null)
        {
            c++;
            root=root.right;
        }
        return c;
    }
    public int countNodes(TreeNode root) {
        if(root==null)
        return 0;

        int l=height(root);
        int r=rheight(root);
        if(l==r)
        return (1<<l)-1;
        
        return 1+countNodes(root.left)+countNodes(root.right);
    }
}