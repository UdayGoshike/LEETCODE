class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int l=0;
        int a=0;
        for(int r=0;r<nums.size();r++){
            m[nums[r]]++;
            while(m[nums[r]]>k){
                m[nums[l]]--;
                l++;
            }
            a=max(a,r-l+1);
        }
        return a;
    }
};