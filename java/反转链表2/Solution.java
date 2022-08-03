package 反转链表2;

import 从尾到头打印链表.ListNode;

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode prev;
        ListNode now;
        ListNode after;
        if(head==null || head.next==null){
            return head;
        }
        prev = head;
        now = head.next;
        after = now.next;
        prev.next=null;
        while(now!=null){
            if(after==null){
                now.next = prev;
                return now;
            }
            now.next = prev;
            prev = now;
            now = after;
            after = after.next;
        }
        return now;
    }
}
