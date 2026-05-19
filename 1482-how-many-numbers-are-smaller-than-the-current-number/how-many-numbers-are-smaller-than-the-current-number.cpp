class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> t = nums;
        sort(t.begin(), t.end());
        vector<int> v;
        map<int, int> m;
        for (int i = 0; i < t.size(); i++) {
            if (m.find(t[i]) == m.end()) {
                m[t[i]] = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            v.push_back(m[nums[i]]);
        }
        return v;
    }
};