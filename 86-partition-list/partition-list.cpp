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
    ListNode* partition(ListNode* head, int x) {
        ListNode *left=new ListNode(-1);
        ListNode *right=new ListNode(-1);
        ListNode *l=left;
        ListNode *r=right;
        ListNode *temp=head;
        while(temp!=nullptr)
        {
            if(temp->val<x)
            {
                l->next=temp;
                l=l->next;
            }
            else
            {
                r->next=temp;
                r=r->next;
            }
            temp=temp->next;
        }
        r->next=nullptr;
        l->next=right->next;;
        return left->next;
    }
};