class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int c=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                c++;
            }
            if(nums[i]!=nums[i-1]){
                c=1;
            }
            if(c>k){
                nums.erase(nums.begin()+i);
                i--;
                c--;
            }
        }
        return nums;
    }
};