class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2,
                                       int k) {
                                        vector<vector<int>>v;
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>q;
        for(int i=0;i<min((int)nums2.size(),k);i++){
            q.push({nums1[0]+nums2[i],0,i});
        }
        while(k-- && !q.empty()){
            auto curr=q.top();
            q.pop();
            int i=curr[1];
            int j=curr[2];
            v.push_back({nums1[i],nums2[j]});
            if(i+1<nums1.size()){
                q.push({nums1[i+1]+nums2[j],i+1,j});
            }
        }
        return v;
    }
};