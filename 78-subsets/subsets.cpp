class Solution {
public:
    vector<vector<int>>v;
    void back(int i,vector<int> &nums,vector<int> &t){
        v.push_back(t);
        // if(i>=nums.size()){
        //     return;
        // }//optional
        
        for(int in=i;in<nums.size();in++){
            t.push_back(nums[in]);
            back(in+1,nums,t);
            t.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>t;
        back(0,nums,t);
        return v;
    }
};