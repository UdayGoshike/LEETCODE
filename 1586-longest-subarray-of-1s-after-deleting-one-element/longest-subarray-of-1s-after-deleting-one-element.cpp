class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0;
        int a=0;
        int z=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                z++;
            }
            while(z>1){
                if(nums[l]==0){
                    z--;
                }
                l++;
            }
            a=max(a,i-l);
        }
        return a; 
    }
};