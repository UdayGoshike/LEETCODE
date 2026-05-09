class Solution {
public:
int fi(int n,vector<int>&dp){
    if(dp[n]!=-1){
        return dp[n];
    }
    if(n<=1){
        return n;
    }
   
    return dp[n]=fi(n-1,dp)+fi(n-2,dp);
}
    int fib(int n) {
       vector<int>dp(n+1,-1);
       return fi(n,dp); 
    }
};