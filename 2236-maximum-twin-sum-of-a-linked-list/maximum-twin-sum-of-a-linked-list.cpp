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
    int pairSum(ListNode* head) {
        stack<int>s;
        ListNode* t=head;
        while(t!=NULL){
            s.push(t->val);
            t=t->next;
        }
        int ans=INT_MIN;
        t=head;
        while(t!=NULL){
            if(!s.empty()){
                int q=s.top();
                s.pop();
                ans=max(ans,t->val+q);
            }
            t=t->next;
        }
        return ans;
    }
};