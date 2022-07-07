package 从尾到头打印链表;

import java.util.Stack;

public class Solution2 {
    public int[] reversePrint(ListNode head) {
        Stack<Integer> stack = new Stack<>();
        ListNode temp = head;
        while(temp!=null){
            stack.push(temp.val);
            temp = temp.next;
        }
        int len = stack.size();
        int idx = 0;
        int[] res = new int[len];
        while(stack.size()!=0){
            res[idx++] = stack.pop();
        }
        return res;
    }
}
