class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0;
        int l=0;
        int r=0;
        int maxi=0;
        while(r<nums.size()-1){
            maxi=max(maxi,l+nums[l]);
            if(l>=r){
                r=maxi;
                ans++;
            }
            l++;
        }
        return ans;
    }
};