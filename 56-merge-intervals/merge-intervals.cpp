class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int i=1;
        sort(intervals.begin(),intervals.end());
        while(i<intervals.size()){
            if(intervals[i][0]<=intervals[i-1][1]){
                int s=min(intervals[i-1][0],intervals[i][0]);
                int e=max(intervals[i-1][1],intervals[i][1]);
                intervals.erase(intervals.begin()+i-1,intervals.begin()+i+1);
                intervals.insert(intervals.begin()+i-1,{s,e});
                i=max(i-1,i);
            }else{
                i++;
            }
        }
        return intervals;
    }
};