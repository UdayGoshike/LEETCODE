class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int>s;
        int m=0;
        int d=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                d=nums[i];
            }
                s.insert(nums[i]);
            
        }
        for(int i=1;i<=nums.size();i++){
            if(s.find(i)==s.end()){
                m=i;
                break;
            }
        }
        
        return {d,m};
    }
};