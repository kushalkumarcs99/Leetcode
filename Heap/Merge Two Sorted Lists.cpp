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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        priority_queue<int, vector<int>, greater<int> > pq;
        //int n1 = l1.size();
        //int n2 = l2.size();
        
        //creating the min heap
            while(l1)
            {
                pq.push(l1 -> val);
                l1 =  l1 -> next;
            }
            while(l2)
            {
                pq.push(l2 -> val);
                l2 =  l2 -> next;
            }
        
        //Creating a res list

    if(pq.empty())   
        return NULL;
    ListNode *root = new ListNode(pq.top());
    pq.pop();
    ListNode *res = root;
    while(!pq.empty())
    {
        ListNode *tmp = new ListNode(pq.top());
        pq.pop();
        root -> next = tmp;
        root = root -> next;
    }
    return res;
    }
};
