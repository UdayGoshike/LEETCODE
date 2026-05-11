class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            stack<int>s;
            while(nums[i]>0){
                s.push(nums[i]%10);
                nums[i]=nums[i]/10;
            }
            while(!s.empty()){
                v.push_back(s.top());
                s.pop();
            }
          
        }
        return v;
    }
};