class Solution {
public:
    int lessthanorequal(vector<int> nums, int k) {
        int l = 0;
        int ans = 0;
        unordered_map<int, int> m;
        for (int r = 0; r < nums.size(); r++) {
            m[nums[r]]++;
            while (m.size() > k) {
                m[nums[l]]--;
                if (m[nums[l]] == 0) {
                    m.erase(nums[l]);
                }
                l++;
            }
            ans += r - l - 1;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return lessthanorequal(nums, k) - lessthanorequal(nums, k - 1);
    }
};