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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode *slow;
       ListNode *quick;
       ListNode *beforeSlow;
       slow=quick=head;
       for(int i=1;i<=n;i++)
       quick=quick->next;
       while(quick!=NULL)
       {
           beforeSlow=slow;
           slow=slow->next;
           quick=quick->next;
       }
       //注意删除的指针就是head的情况
       if(slow==head)
       head=head->next;
       beforeSlow->next=slow->next;
       return head;
    }   
};