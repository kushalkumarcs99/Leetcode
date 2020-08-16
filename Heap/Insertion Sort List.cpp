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
    ListNode* insertionSortList(ListNode* head) {
        if(head == NULL)
            return head;
        priority_queue<int, vector<int>, greater<int> > PQ;   
        while(head)
        {
            PQ.push(head->val);
            head = head->next;
        }
        ListNode *Root = new ListNode(PQ.top());
        PQ.pop();
        ListNode *Res = Root;
        while(!PQ.empty())
        {
            ListNode *temp = new ListNode(PQ.top());
            PQ.pop();
            Root -> next = temp;
            Root = Root -> next;
        }
        return Res;
    }
};
