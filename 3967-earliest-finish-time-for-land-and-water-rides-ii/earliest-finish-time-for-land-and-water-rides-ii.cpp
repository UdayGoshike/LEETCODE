class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
         int lf=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            lf=min(lf,landStartTime[i]+landDuration[i]);
        }
        int lff=INT_MAX;
        for(int i=0;i<waterStartTime.size();i++){
            lff=min(lff,max(lf,waterStartTime[i])+waterDuration[i]);    
        }
        int wf=INT_MAX;
        int wff=INT_MAX;
        for(int i=0;i<waterStartTime.size();i++){
            wf=min(wf,waterStartTime[i]+waterDuration[i]);
        }
        for(int i=0;i<landStartTime.size();i++){
            wff=min(wff,max(wf,landStartTime[i])+landDuration[i]);
        }
        return min(lff,wff);
    }
};