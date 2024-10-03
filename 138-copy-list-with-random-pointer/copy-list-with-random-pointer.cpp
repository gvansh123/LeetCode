/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
#define null NULL
class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head==null)
        return null;

        unordered_map<Node*,Node*> m;
        Node * temp=head;
        while(temp!=null)
        {
            m[temp]=new Node(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=null)
        {
            m[temp]->next=m[temp->next];
            m[temp]->random=m[temp->random];
            temp=temp->next;
        }
    return m[head];
    }
};