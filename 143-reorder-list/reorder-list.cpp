/**
 * Definition for singly-linked list->
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
    ListNode* findMiddle(ListNode* &head)
    {
        ListNode* slow=head;
        ListNode *fast=head;
        while(fast!=nullptr&& fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* &head)
    {
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* next=curr->next;
        while(curr!=nullptr)
        {
            curr->next=prev;
            prev=curr;
            curr=next;
            if(next)
            next=next->next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* t=findMiddle(head);
        ListNode* mid=reverse(t);
        ListNode* first=head;
        while(first!=nullptr&&mid!=nullptr)
        {
            ListNode* temp = first->next;
            first->next = mid;
            first = temp;
            
            temp = mid->next;
            mid->next = first; 
            mid = temp;
        }
        if(first!=nullptr)
        first->next=nullptr;
    }
};