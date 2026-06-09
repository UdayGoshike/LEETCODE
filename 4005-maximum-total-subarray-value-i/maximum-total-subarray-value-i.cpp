class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int m=INT_MAX;
        int ma=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<m){
                m=nums[i];
            }
            if(nums[i]>ma){
                ma=nums[i];
            }
        }

        return 1LL*abs(ma-m)*k;
    }
};