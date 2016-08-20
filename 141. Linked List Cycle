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
    bool hasCycle(ListNode *head) {
      ListNode *slow;
      ListNode *quick;
      slow=head;
      quick=head;
      while(quick!=NULL && slow!=NULL)
      {
          slow=slow->next;
          if(quick->next==NULL)
          break;
          else
          quick=quick->next->next;
          if(slow==quick)
          return true;
      }
      return false;
    }
};