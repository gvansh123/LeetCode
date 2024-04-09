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
    int pairSum(ListNode* head) {
        stack<int> s;
        int ans=0;
        ListNode *slow = head, *fast = head;
        while(fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        while(slow!=NULL) {
            s.push(slow->val);
            slow = slow->next;
        }

        ListNode* p = head;
        while(!s.empty()) {
            int sum = p->val + s.top();
            ans = max(ans, sum);
            p = p->next;
            s.pop();
        }

        return ans;
    }
};