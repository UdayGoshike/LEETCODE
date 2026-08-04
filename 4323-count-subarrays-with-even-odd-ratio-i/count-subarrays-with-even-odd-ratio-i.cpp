class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int an=0;
        for(int i=0;i<nums.size();i++){
            int e=0;
            int o=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]%2==0){
                    e++;
                }else{
                    o++;
                }
                float t=a/b;
                
                if(o>0 && e*b<=o*a){
                    
                    an++;
                }
            }
        }
        return an;
    }
};