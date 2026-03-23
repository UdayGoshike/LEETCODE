class Solution {
public:
vector<vector<int>>v;
void back(int in,vector<int>&nums,vector<int>&t){
    v.push_back(t);
    for(int i=in;i<nums.size();i++){
        if(i>in && nums[i]==nums[i-1]) continue;
        t.push_back(nums[i]);
        back(i+1,nums,t);
        t.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>t;

        back(0,nums,t);
        return v;
    }
};