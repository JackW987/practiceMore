package 二叉树的层序遍历;

import java.util.ArrayList;
import java.util.List;

class Solution {
    private List<List<Integer>> lists = new ArrayList<>();
    public void ans(TreeNode node,int level){
        if(node==null){
            return;
        }
        if(lists.size()==level){
            lists.add(new ArrayList<Integer>());
        }
        lists.get(level).add(node.val);

        ans(node.left,level+1);
        ans(node.right,level+1);
    }
    public List<List<Integer>> levelOrder(TreeNode root) {
        ans(root,0);
        return lists;
    }
}
