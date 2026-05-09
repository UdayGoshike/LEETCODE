class Solution {
public:
int cl(int n,vector<int>&dp){
        if(n<=1){
            dp[n]=1;
            // return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=cl(n-1,dp)+cl(n-2,dp);
        return  dp[n];
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        cl(n,dp);
        return dp[n];
    }
};