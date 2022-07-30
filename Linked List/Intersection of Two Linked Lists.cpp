/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
     
int count(ListNode *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
    
    
    
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {   int count1=count(headA);
       int count2=count(headB);
        if(count1==1&&count2==1&&headA->val==headB->val){
            return headA;
        }
     if(count1==1&&count2==1&&headA->val!=headB->val){
            return NULL;
        }
     if(headA==NULL&&headB==NULL){
         return NULL;
     }
     if(headA->next==NULL&&headB==NULL||headB->next==NULL&&headA==NULL ){
         return NULL;
     }
        int count;
        int i;
        if (count1 > count2)
        {
            count = count1 - count2;
            for (i = 1; i <= count; i++)
            {
                headA = headA->next;
            }
        }
        else
        {
            count = count2 - count1;
            for (i = 1; i <= count; i++)
            {
                headB = headB->next;
            }
        }
      
        while (headA != NULL && headB != NULL)
        {
            if (headA->next == headB->next)
            {
             
                return headA->next;
            }
            else
            {
                headA = headA->next;
                headB = headB->next;
            }
        }
        return NULL;
    }
};
