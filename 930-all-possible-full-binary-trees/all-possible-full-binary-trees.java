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
    public List<TreeNode> solve(int n)
    {
        List<TreeNode> temp=new ArrayList<>();
        if(n==1)
        {
            temp.add(new TreeNode(0));
            return temp;
        }
        n--;
        for(int i=1;i<n;i+=2)
        {
            List<TreeNode> left=solve(i);
            List<TreeNode> right=solve(n-i);
            for(TreeNode l:left)
            {
                for(TreeNode r:right)
                {
                    temp.add(new TreeNode(0,l,r));
                }
            }
        }
        return temp;
    }
    public List<TreeNode> allPossibleFBT(int n) {
        return solve(n);
    }
}