package 二叉树的层序遍历_广度方法;

public class Run {
    public static void main(String[] args) {
        Solution solution = new Solution();
//        根节点
        TreeNode root = new TreeNode();
        root.val = 3;
//        9节点
        TreeNode node9 = new TreeNode();
        node9.val = 9;
//        20节点
        TreeNode node20 = new TreeNode();
        node20.val = 20;
//        15节点
        TreeNode node15 = new TreeNode();
        node15.val = 15;
//        7节点
        TreeNode node7 = new TreeNode();
        node7.val = 7;
//        节点拼接
        root.left = node9;
        root.right = node20;
        node20.left = node15;
        node20.right = node7;
        System.out.println(solution.levelOrder(root));
    }
}
