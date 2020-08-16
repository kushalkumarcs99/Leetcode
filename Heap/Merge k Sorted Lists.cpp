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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int> > pq;
        int n = lists.size();
        
        //creating the min heap
        for(int i = 0;i<n;i++)
        {
            ListNode *tmp = lists[i];
            while(tmp)
            {
                pq.push(tmp -> val);
                tmp =  tmp -> next;
            }
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
