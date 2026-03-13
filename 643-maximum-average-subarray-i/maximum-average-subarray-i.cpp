class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=0;
        double s=INT_MIN;
        for(int i=0;i<k;i++){
            ans+=nums[i];
        }
        s=max(s,ans/k);

        for(int i=k;i<nums.size();i++){
            ans+=nums[i];
            ans-=nums[i-k];
            double q=ans/k;
            s=max(s,q);
        }
        return s;
        
    }
};