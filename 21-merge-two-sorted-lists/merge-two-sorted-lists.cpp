/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode *temp=nullptr;
        ListNode *head=new ListNode(-1);
        temp=head;
        while(a!=nullptr && b!=nullptr)
        {
            if(a->val<b->val)
            {
                head->next=a;
                a=a->next;
                head=head->next;
            }
            else
            {
                head->next=b;
                b=b->next;
                head=head->next;
            }
        }
        if(a)
        {
            head->next=a;
        }
        if(b)
        {
            head->next=b;
        }
        return temp->next;
    }
};