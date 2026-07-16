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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* t=head;
        ListNode* p=nullptr;
        while(t!=nullptr){
            
            if(t->val==val && t==head){
                head=head->next;
               
            }else if (t->val==val){
                p->next=t->next;
            }else{
                p=t;
            }
             t=t->next;
            
        }
        return head;
    }
};