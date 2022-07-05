package 二叉树的层序遍历_深度方法;

import 二叉树的层序遍历_广度方法.TreeNode;

import java.util.ArrayList;
import java.util.List;

public class Solution {
    private List<List<Integer>> nodeList = new ArrayList<>();
    public List<List<Integer>> levelOrder(TreeNode root) {
        return nodeList;
    }
    public void ans(TreeNode nodeLeft,TreeNode nodeRight,int level){
        if(nodeLeft == null && nodeRight == null){
            return;
        }
        if(nodeList.size() == level){
            nodeList.add(new ArrayList<>());
        }
        if(nodeLeft!=null){
            nodeList.get(level).add(nodeLeft.val);
            ans(nodeLeft.left,nodeLeft.right,level+1);
        }
        if(nodeRight!=null){
            nodeList.get(level).add(nodeRight.val);
            ans(nodeLeft.left,nodeLeft.right,level+1);
        }
    }
}
