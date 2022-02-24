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
    ListNode* findMid(ListNode* head, ListNode* tail){
        ListNode* mid=head;
        ListNode* start=head;
        while(start!=tail && start->next!=tail){
            start=start->next->next;
            mid=mid->next;
        }
        return mid;
    }
    ListNode* merge(ListNode* l1,ListNode* l2){
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val>l2->val){
            swap(l1,l2);
        }
        ListNode* head=l1;
        while(l1!=NULL && l2!=NULL){
            ListNode* temp=NULL;
            while(l1!=NULL && l1->val<=l2->val){
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1,l2);
        }
        return head;
    }
    ListNode* mergeSort(ListNode* head,ListNode* tail){
        if(head==tail){
            ListNode* temp=new ListNode(head->val);
            return temp;
        }
        ListNode* mid=findMid(head,tail);
        ListNode* left=mergeSort(head,mid);
        ListNode* right=mergeSort(mid->next,tail);
        return merge(left,right);
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL) return head;
        ListNode* tail=head;
        while(tail!=NULL && tail->next!=NULL){
            tail=tail->next;
        }
        return mergeSort(head,tail);
    }
};