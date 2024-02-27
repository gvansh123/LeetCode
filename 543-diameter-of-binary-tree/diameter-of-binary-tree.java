class Solution {
    public class diam {
        int diameter;
        int height;
        diam(int diameter, int height) {
            this.diameter = diameter;
            this.height = height;
        }
    }

    public diam solv(TreeNode root) {
        if (root == null) {
            return new diam(0, 0);
        }

        diam leftData = solv(root.left);
        diam rightData = solv(root.right);

        int currentDiameter = Math.max(leftData.height + rightData.height, 
                                        Math.max(leftData.diameter, rightData.diameter));
        int currentHeight = Math.max(leftData.height, rightData.height) + 1;

        return new diam(currentDiameter, currentHeight);
    }

    public int diameterOfBinaryTree(TreeNode root) {
        diam data = solv(root);
        return data.diameter;
    }
}