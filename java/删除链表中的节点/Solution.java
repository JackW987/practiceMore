package 删除链表中的节点;

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode deleteNode(ListNode head, int val) {
        if(head.val==val){
            head = head.next;
            return head;
        }
        ListNode curNode = head.next;
        ListNode preNode = head;
        while(curNode!=null){
            if(curNode.val==val){
                preNode.next = curNode.next;
                return head;
            }
            preNode = curNode;
            curNode = curNode.next;
        }
        return head;
    }
}
