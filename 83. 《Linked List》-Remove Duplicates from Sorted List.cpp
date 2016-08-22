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
    ListNode* deleteDuplicates(ListNode* head) {
      ListNode *p;
      ListNode *pre;
      p=head;
      int sum=0;
      while(p!=NULL)
      {
         pre=p; 
         while(p->next!=NULL&&p->val == p->next->val) {p=p->next; sum++;}
         p=p->next;
         //这一行与前面一行代码的先后顺序，因为如何先修改了pre,那么整个链表已经发生变化了
         if(sum!=0)
         pre->next=p;
      }
      return head;
    }
};