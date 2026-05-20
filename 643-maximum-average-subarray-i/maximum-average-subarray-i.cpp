class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double a=0;
        double ans=INT_MIN;
        for(int i=0;i<k;i++){
            a+=nums[i];
        }
        ans=max(ans,a/k);
        for(int i=k;i<nums.size();i++){
            a+=nums[i];
            a=a-nums[i-k];
            ans=max(ans,a/k);
        }
        return ans;
    }
};