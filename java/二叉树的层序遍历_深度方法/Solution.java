package 二叉树的层序遍历_深度方法;
import java.util.ArrayList;
import java.util.List;

class Solution {
    private List<List<Integer>> nodeList = new ArrayList<>();
    public List<List<Integer>> levelOrder(TreeNode root) {
        ans(root,0);
        return null;
    }
    public void ans(TreeNode nodeParent,int level){
        if(nodeList.size()==level){
            nodeList.add(new ArrayList<>());
        }
        if(nodeParent==null){
            return ;
        }
        nodeList.get(level).add(nodeParent.val);
        ans(nodeParent.left,level+1);
        ans(nodeParent.right,level+1);
    }
}
