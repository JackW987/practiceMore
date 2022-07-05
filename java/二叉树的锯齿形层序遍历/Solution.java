package 二叉树的锯齿形层序遍历;

import sun.font.TrueTypeFont;
import 二叉树的层序遍历_广度方法.TreeNode;

import java.util.*;

//[1,2,3,4,null,null,5]
public class Solution {
    private List<List<Integer>> results = new ArrayList<>();
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        if(root==null){
            return results;
        }
        int index = 0;
        LinkedList<TreeNode> queue = new LinkedList<>();
        queue.offer(root);
        while(!queue.isEmpty()){
            int size = queue.size();
            Deque<Integer> childList = new LinkedList<>();
            for(int i=0;i<size;i++){
                TreeNode node = queue.poll();
                if(index%2==0){
                    childList.offerLast(node.val);
                }else{
                    childList.offerFirst(node.val);
                }
                if(node.left!=null){
                    queue.offer(node.left);
                }
                if(node.right!=null){
                    queue.offer(node.right);
                }
            }
            results.add(new LinkedList<>(childList));
            index = index+1;
        }
        return results;
    }
}
