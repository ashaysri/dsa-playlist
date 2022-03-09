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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        if(head->next==NULL)
            return head;
        ListNode* curr=head;
        int val=curr->val;
        if(curr->next->val!=val){
            head->next=deleteDuplicates(curr->next);
            return head;
        }
        else{
            while(curr && curr->val==val)
                curr=curr->next;
            return deleteDuplicates(curr);
        }
    }
};