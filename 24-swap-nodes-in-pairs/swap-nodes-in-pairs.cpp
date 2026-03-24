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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL ||head->next==NULL){
            return head;
        }
        ListNode* p=head;
        ListNode* c=head->next;
        bool v=true;
        while(c!=NULL){
            if(v) swap(p->val,c->val);
            v=!v;
            p=p->next;
            c=c->next;
        }
        return head;
        
    }
};