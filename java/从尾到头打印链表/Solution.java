package 从尾到头打印链表;
public class Solution {
    public int[] reversePrint(ListNode head) {
        ListNode lenNode = null;
        lenNode = head;
        int count = 0;
        while(lenNode!=null){
            lenNode = lenNode.next;
            count++;
        }
        int[] res = new int[count];
        while(head!=null){
            res[--count] = head.val;
            head = head.next;
        }
        return res;
    }
}
