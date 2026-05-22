class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        set<int>s2;
        vector<vector<int>>a;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
            
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        vector<int>v;
        for(int i:s1){
            if(s2.find(i)==s2.end()){
                v.push_back(i);
            }
        }
        a.push_back(v);
        v.clear();
        for(int i:s2){
            if(s1.find(i)==s1.end()){
                v.push_back(i);
            }
        }
        a.push_back(v);
        return a;
    }
};