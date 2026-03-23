class Solution {
public:

vector<vector<int>>v;
void back(vector<int>&nums,vector<int>&t,vector<bool>&u){
    if(t.size()==nums.size()){
        v.push_back(t);
    }
    for(int i=0;i<nums.size();i++){
        if(u[i]) continue;
        u[i]=true;
        t.push_back(nums[i]);
        back(nums,t,u);
        t.pop_back();
        u[i]=false;
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>t;
        vector<bool>u(nums.size(),false);
        back(nums,t,u);

        return v;
    }
};