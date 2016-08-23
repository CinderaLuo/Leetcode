/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
       ListNode *p;
       int tmp;
       for(p=head; p!=NULL&&p->next!=NULL ;p=p->next->next)
       {
           tmp=p->val;
           p->val=p->next->val;
           p->next->val=tmp;
       }
      return head;
    }
};