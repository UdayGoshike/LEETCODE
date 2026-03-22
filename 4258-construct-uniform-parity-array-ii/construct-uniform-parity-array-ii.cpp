class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        bool e=false,o=false;
        int l1=INT_MAX;
        int l2=INT_MAX;
        for(int i=0;i<nums1.size();i++){
            
            if(nums1[i]%2==0){
                e=true;
                l1=min(l1,nums1[i]);
            }else{
                o=true;
                l2=min(l2,nums1[i]);
            }
        }
        if(!o ||!e){
            return true;
        }
       
    return l2<l1;
    }
};