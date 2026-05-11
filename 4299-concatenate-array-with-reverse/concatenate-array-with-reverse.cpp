class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>v(2*nums.size());
        int j=2*nums.size()-1;
        for(int i=0;i<nums.size();i++){
            v[i]=nums[i];
            v[j--]=nums[i];
        }
        return v;
    }
};