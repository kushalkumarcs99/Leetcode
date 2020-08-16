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
    ListNode* sortList(ListNode* head) {
        if(head == NULL)
            return head;
        priority_queue<int, vector<int>, greater<int> > pq;   
        while(head)
        {
            pq.push(head->val);
            head = head->next;
        }
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
