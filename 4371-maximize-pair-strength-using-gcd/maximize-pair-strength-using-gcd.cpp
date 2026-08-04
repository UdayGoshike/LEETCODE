class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long a=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                long long t=1ll*nums[i]*nums[j];
                
                long long q=gcd(nums[i],nums[j]);
                t/=(q*q);
            
                a=max(a,t);
            }
            
        }
        return a;
    }
};