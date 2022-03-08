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
        if(head==NULL)
            return false;
        ListNode* slow, *fast;
        slow=head;
        fast=slow->next;
        while(slow!=NULL && fast!=NULL && fast->next!=NULL && slow!=fast){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast==slow)
            return true;
        return false;
    }
};