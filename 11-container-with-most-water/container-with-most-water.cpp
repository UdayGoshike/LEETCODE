class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int h=0;
        int w=0;
        int ans=0;
        while(l<r){
            h=min(height[l],height[r]);
            w=(r-l);
            ans=max(ans,h*w);
            if(height[l]>height[r]){
                r--;
            }else{
                l++;
            }
        }
        return ans;
    }
};