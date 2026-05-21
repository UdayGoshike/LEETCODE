class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for (int i = 0; i < 32; i++) {
            int c = 0;
            for (int j : nums) {
                if ((j >> i) & 1) {
                    c++;
                }
            }
            if (c % 3 != 0) {
                a = a | (1 << i);
            }
        }
        return a;
    }
};