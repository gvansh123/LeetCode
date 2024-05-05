/*
// Definition for a Node.
class Node {
    public int val;
    public Node prev;
    public Node next;
    public Node child;
};
*/

class Solution {
    public Node flatten(Node head) {
        if(head==null)
        return null;
        Node tail=head;
        Node next1=flatten(head.child);
        Node next2=flatten(head.next);
        if(next1!=null)
        {
            tail.next=next1;
            while(tail.next!=null)
            {
                tail.next.prev=tail;
                tail.child=null;
                tail=tail.next;
            }
        }
        tail.next=next2;

        if(next2!=null)
        next2.prev=tail;

        return head;
    }
}