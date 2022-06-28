package 对称二叉树;



class Solution {
    class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode() {}
        TreeNode(int val) { this.val = val; }
        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }
    public boolean isSymmetric(TreeNode root) {
        return ans(root,root);
    }
    public boolean ans(TreeNode nodeCompare,TreeNode node){
        if(nodeCompare==null && node == null) {
            return true;
        }
        if(nodeCompare ==null || node==null){
            return false;
        }
        if(nodeCompare.val != node.val){
            return false;
        }
        return ans(nodeCompare.left,node.right) && ans(nodeCompare.right,node.left);
    }
}
