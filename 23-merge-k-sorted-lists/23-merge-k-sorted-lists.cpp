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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int, ListNode*>,vector<pair<int, ListNode*>>,greater<>> pq;
        for(int i {};i<lists.size();i++){
            if(lists[i]!=NULL)
                pq.push({lists[i]->val,lists[i]});
        }
        ListNode* head=new ListNode(-1);
        ListNode* ans=head;
        while(!pq.empty()){
            pair<int, ListNode*> tp=pq.top();
            pq.pop();
            if(tp.second->next!=NULL)
                pq.push({tp.second->next->val,tp.second->next});
            head->next=tp.second;
            head=head->next;
        }
        return ans->next;
    }
};