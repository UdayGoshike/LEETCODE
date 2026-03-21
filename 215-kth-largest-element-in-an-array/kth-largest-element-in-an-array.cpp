class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>q;
        for(int i:nums){
            q.push(i);
        }
        int a=0;
        while(k--){
            a=q.top();
            q.pop();
        }
        return a;
    }
};