class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        int a=nums[0];
        set<int>st;
        st.insert(nums[0]);
        bool v=true;
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]==nums[i-1]+1 && v==true){
                a+=nums[i];
                
            }else{
                v=false;
            }
            st.insert(nums[i]);
        }
        while(st.find(a)!=st.end()){
            a++;
        }
        return a;
    }
};