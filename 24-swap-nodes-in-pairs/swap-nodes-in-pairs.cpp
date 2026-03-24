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
    ListNode d(0);
    d.next=head;
    ListNode* p=&d;

    while(p->next && p->next->next){
        ListNode *f=p->next;
        ListNode *s=p->next->next;
        f->next=s->next;
        s->next=f;
        p->next=s;
        p->next=s;
        p=f;
    }
    return d.next;
        
    }
};