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
    public int findBottomLeftValue(TreeNode root) {
        Queue<TreeNode> q=new LinkedList<>();
        q.offer(root);
        int ans=-1;
        while(!q.isEmpty())
        {
            TreeNode t=q.poll();
            ans=t.val;
            if(t.right!=null)
            q.offer(t.right);
            if(t.left!=null)
            q.offer(t.left);
        }
        return ans;
    }
}