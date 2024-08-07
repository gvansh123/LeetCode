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
   public int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        ListNode ans=head;
        ListNode prev=head;
        ListNode curr=head.next;
        while(curr!=null)
        {
            int x=gcd(prev.val,curr.val);
            curr=curr.next;
            ListNode temp=new ListNode(x);
            temp.next=prev.next;
            prev.next=temp;
            prev=temp.next;
        }
        return ans;
    }
}