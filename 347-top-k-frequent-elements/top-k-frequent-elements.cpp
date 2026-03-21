class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        priority_queue<pair<int,int>>q;
        for(auto i:m){
            q.push({i.second,i.first});
        }
        vector<int>v;
        while(k--){
            v.push_back(q.top().second);
            q.pop();
        }
        return v;
    }
};