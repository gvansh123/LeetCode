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
    int res = 0;
    public int longestZigZag(TreeNode root) {
        if (root == null) return 0;
        dfs(root.left, 1, true);
        dfs(root.right, 1, false);
        return res;
    }
    
    private void dfs(TreeNode node, int prev, boolean left) {
        if (node == null) return;
        res = Math.max(res, prev);
        dfs(node.left, 1 + (left ? 0 : prev), true);
        dfs(node.right,1 + (left ? prev : 0), false);
    }
}