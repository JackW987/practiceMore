package 合并两个排序的链表;

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
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if(l1==null && l2==null){
            return null;
        }
        if(l1==null){
            return l2;
        }
        if(l2==null){
            return l1;
        }

        ListNode head = null;
        ListNode tail = null;
        if(l1.val>l2.val){
            head = new ListNode(l2.val);
            l2 = l2.next;
        }else{
            head = new ListNode(l1.val);
            l1 = l1.next;
        }
        tail = head;
        while(l1!=null && l2!=null){
            if(l1.val>l2.val){
                tail.next = new ListNode(l2.val);
                tail = tail.next;
                l2 = l2.next;
            }else{
                tail.next = new ListNode(l1.val);
                tail = tail.next;
                l1 = l1.next;
            }
        }
        if(l1==null){
            tail.next = l2;
        }else{
            tail.next = l1;
        }
        return head;
    }
}
