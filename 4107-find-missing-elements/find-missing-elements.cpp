class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int in=0;
        for(int i=nums[0];i<nums[n-1];i++){
            if(nums[in]!=i){
                v.push_back(i);
            }else{
                in++;
            }
        }
        return v;
    }
};