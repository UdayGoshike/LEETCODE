class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>v;
        int ma=INT_MIN;
        for(int i=0;i<nums.size();i++){
            ma=max(nums[i],ma);
            int temp=gcd(nums[i],ma);
            v.push_back(temp);
        }
        long long s=0;
        sort(v.begin(),v.end());
        int l=0;
        int r=v.size()-1;
        while(l<r){
            s+=gcd(v[l],v[r]);
            l++;
            r--;
        }
        return s;
    }
};