/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseBetween(ListNode head, int left, int right) {
        if(head==null||head.next==null||left==right)
        return head;

        int pos=1;
        ListNode prev=null;
        ListNode curr=head;
        while(pos!=left&&curr!=null)
        {
            pos++;
            prev=curr;
            curr=curr.next;
        }
        ListNode tail=curr;
        ListNode p=null;
        ListNode next=curr.next;
        while(pos!=right&&curr!=null)
        {
            next=curr.next;
            curr.next=p;
            p=curr;
            curr=next;
            pos++;
        }
        if(curr!=null)
        {
            next=curr.next;
            curr.next=p;
            p=curr;
        }
        if(prev==null)
        head=p;
        else
        prev.next=p;

        tail.next=next;
        return head;

    }
}