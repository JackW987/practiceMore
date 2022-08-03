package 反转链表;

/*
public class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}*/
public class Solution {
    public ListNode ReverseList(ListNode head) {
        if(head==null){
            return null;
        }
        ListNode headNew = new ListNode(0);
        while(head!=null){
            tailInsert(headNew,head);
            head = head.next;
        }

        return headNew.next;
    }
    public void tailInsert(ListNode tail, ListNode node){
        ListNode nodeNew = new ListNode(node.val);
        nodeNew.next = tail.next;
        tail.next = nodeNew;
    }
}
