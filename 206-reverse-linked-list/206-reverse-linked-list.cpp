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
    ListNode* first;
    void reverse(ListNode* q,ListNode* p){
        if(p){
            reverse(p,p->next);
            p->next=q;
        }
        else
            first=q;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return head;
        reverse(NULL,head);
        return first;
    }
};