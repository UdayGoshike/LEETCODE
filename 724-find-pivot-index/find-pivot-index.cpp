class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(int i:nums){
            total+=i;
        }
        int pr=0;
        for(int i=0;i<nums.size();i++){
            if(total-pr-nums[i]==pr){
                return i;
            }
            pr+=nums[i];
        }
        return -1;
    }
};