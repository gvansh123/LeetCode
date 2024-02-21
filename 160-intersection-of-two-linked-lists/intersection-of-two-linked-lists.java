/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int ca=0,cb=0;
        ListNode a=headA;
        ListNode b=headB;
        while(a!=null)
        {
            ca++;
            a=a.next;
        }
        while(b!=null)
        {
            cb++;
            b=b.next;
        }
        while(ca>cb)
        {
            ca--;
            headA=headA.next;
        }
        while(ca<cb)
        {
            cb--;
            headB=headB.next;
        }
        while(headA!=headB)
        {
            headA=headA.next;
            headB=headB.next;
        }
        return headA;
    }
}