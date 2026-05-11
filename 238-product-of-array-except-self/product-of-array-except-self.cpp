class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>lp;
        int l=1;
        for(int i=0;i<nums.size();i++){
            lp.push_back(l);
            l*=nums[i];
        }
        vector<int>rp;
        int r=1;
        for(int i=nums.size()-1;i>=0;i--){
            rp.push_back(r);
            r*=nums[i];
        }
        reverse(rp.begin(),rp.end());
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            a.push_back(lp[i]*rp[i]);
        }
        return a;
        
    }
};