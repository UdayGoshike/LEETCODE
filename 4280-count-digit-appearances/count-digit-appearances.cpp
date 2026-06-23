class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                m[nums[i]%10]++;
                nums[i]/=10;
            }
        }
        return m[digit]++;
    }
};