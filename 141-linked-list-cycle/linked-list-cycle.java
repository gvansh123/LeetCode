/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode slow=head;
        if(head==null)
        return false;
        if(head.next==null)
        return false;
        ListNode fast=head.next.next;
        if(fast==null)
        return false;
        while(slow.next!=fast&&slow!=null)
        {
            slow=slow.next;
            if(fast.next!=null)
            {
                if(fast.next.next!=null)
                {
                    fast=fast.next.next;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        if(slow.next==fast)
        return true;
        else 
        return false;
    }
}