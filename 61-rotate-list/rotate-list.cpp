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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *t=head;
        int c=1;
        while(t->next!=NULL){
            c++;
            t=t->next;
        }
        k=k%c;
        if(k==0) return head;
        int q=c-k;

        ListNode * temp=head;
        t->next=head;
        int w=1;
        while(w<q){
            temp=temp->next;
            w++;
        }
        ListNode *nh=temp->next;
        temp->next=NULL;
        
        return nh;
    }
};