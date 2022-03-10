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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p=new ListNode;
        ListNode* head=p;
        int carry=0;
        while(l1 && l2){
            p->val=(carry+l1->val+l2->val)%10;
            carry=(carry+l1->val+l2->val)/10;
            if(l1->next||l2->next){
                p->next=new ListNode;
                p=p->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            p->val=(carry+l1->val)%10;
            carry=(carry+l1->val)/10;
            if(l1->next){
                p->next=new ListNode;
                p=p->next;
            }
            l1=l1->next;
        }
        while(l2){
            p->val=(carry+l2->val)%10;
            carry=(carry+l2->val)/10;
            if(l2->next){
                p->next=new ListNode;
                p=p->next;
            }
            l2=l2->next;
        }
        if(carry==1){
            p->next=new ListNode(1);
        }
        return head;
    }
};