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
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head;
    ListNode *ptr=NULL;
        ListNode *temp;
    while(curr!=NULL){
        temp=curr->next;
        curr->next=ptr;
        ptr=curr;
        curr=temp;
        
    }
        return ptr;
        
    }
};
