class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums;
        }
        vector<int> l;
        vector<int> r;
        int min = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            min = max(min, nums[i]);
            l.push_back(min);
        }
        int maxi = INT_MIN;
        for (int i = nums.size() - 1; i >= 0; i--) {
            maxi = max(maxi, nums[i]);
            r.push_back(maxi);
        }
        reverse(r.begin(), r.end());
        vector<int> ans;
        ans.push_back(nums[0]);
        for (int i = 1; i < nums.size() - 1; i++) {
            if (nums[i] > l[i-1]) {
                ans.push_back(nums[i]);
            } else if (nums[i] > r[i+1]) {
                ans.push_back(nums[i]);
            }
        }
        ans.push_back(nums[nums.size() - 1]);
        return ans;
    }
};