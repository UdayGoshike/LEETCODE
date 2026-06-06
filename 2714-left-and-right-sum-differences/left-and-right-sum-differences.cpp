class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ls;
        vector<int>ans;
        int count=0;
        for(int i=0;i<nums.size();i++){
            ls.push_back(count);
            count+=nums[i];
        }
        int n=0;
        for(int i=0;i<nums.size();i++){
            n+=nums[i];
            ans.push_back(abs(ls[i]-(count-n)));
        }
        return ans;
    }
};