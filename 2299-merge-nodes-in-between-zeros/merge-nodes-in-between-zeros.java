class Solution {
    public ListNode mergeNodes(ListNode head) {
        ListNode temp=null,ans=null;
        ListNode h=head;
        int sum=0;
        while(h!=null)
        {
            if(h.val==0&&sum!=0)
            {
                ListNode x=new ListNode(sum);
                sum=0;
                if(temp==null){
                temp=x;
                ans=temp;
                }
                else{
                temp.next=x;
                temp=temp.next;
                }
            }
            sum=sum+h.val;
            h=h.next;
        }
        return ans;
    }
}