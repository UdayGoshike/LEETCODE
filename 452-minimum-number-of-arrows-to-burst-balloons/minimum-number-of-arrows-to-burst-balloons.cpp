class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int mi=points[0][0];
        int ma=points[0][1];
        int a=1;
        
        for(int i=1;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            if(x<=ma){
                mi=max(mi,x);
                ma=min(ma,y);
            }else{
                a++;
                mi=x;
                ma=y;
            }
        }
        return a;
    }
};