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
    void deleteNode(ListNode* node) {
       ListNode *pre;
       for(;node->next!=NULL;pre=node,node=node->next)
       {
          node->val=node->next->val;   
       }
       pre->next=NULL;
    }
};