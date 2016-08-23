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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       ListNode *result;
       ListNode f(0); //容易错
       result=&f;
       while(l1!=NULL && l2!=NULL)
       {
           if(l1->val < l2->val)
           {
               result->next=l1;
               l1=l1->next;
           }
           else
           {
               result->next=l2;
               l2=l2->next;
           }
           result=result->next;
       }
       if(l1!=NULL) 
       {
           result->next=l1;
       }
       if(l2!=NULL)
       {
           result->next=l2;
       }
       return f.next; //避免了第一个值不好处理的情况
    }
};