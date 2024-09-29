/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*>mp;
        if(node==nullptr)
         return NULL;

         Node*copy=new Node(node->val,{});
         mp[node]=copy;
         queue<Node*> q;
         q.push(node);
         while(!q.empty())
         {
            Node* temp=q.front();
            q.pop();
            for(Node* n:temp->neighbors)
            {
                if(mp.find(n)==mp.end())
                {
                    mp[n]=new Node(n->val,{});
                    q.push(n);
                }
                mp[temp]->neighbors.push_back(mp[n]);
            }
         }
         return copy;
    }
};