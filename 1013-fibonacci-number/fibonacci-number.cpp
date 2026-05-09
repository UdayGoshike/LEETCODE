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
    //    return fi(n,dp); 
    if(n<=1){
        return n;
    }
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
    }
};