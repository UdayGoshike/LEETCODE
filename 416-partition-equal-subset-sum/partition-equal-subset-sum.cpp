class Solution {
public:
vector<vector<int>>dp;
    bool h(int s,int sum,int i, vector<int>& nums,int n) {
        if(s==sum/2){
            return true;
        }
        if(i==n ||s>sum/2){
            return false;
        }
        if(dp[i][s]!=-1){
            return dp[i][s];
        }
        return  dp[i][s]=h(s+nums[i],sum,i+1,nums,nums.size())||h(s,sum,i+1,nums,nums.size());
        
    }
    bool canPartition(vector<int>& nums) {
        int s=accumulate(nums.begin(),nums.end(),0);
        if(s%2!=0){
            return false;
        }
        dp.assign(nums.size(),vector<int>(s/2+1,-1));
        return h(0,s,0, nums,nums.size()); 
    }
};