class Solution {
public:
    int findMin(vector<int>& nums) {
         int m=INT_MAX;
         for(int i:nums){
            if(i<=m){
                m=i;
            }
         }
         return m;
    }
};