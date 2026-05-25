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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL|| head->next==NULL){
            return head;
        }
        ListNode *o=head;
        ListNode *h1=o;
        ListNode *e=head->next;
        ListNode *h2=e;
        //use even pointer as loop controller as using odd pointer may cause runtime error
        while(e!=NULL && e->next!=NULL){
            o->next=e->next;
            o=o->next;
            if(o!=NULL){
                e->next=o->next;
                e=e->next;
            }
            
        }
        o->next=h2;
        return h1;
    }
};