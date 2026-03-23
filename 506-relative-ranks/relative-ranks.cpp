class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       priority_queue<pair<int,int>>q;
       
        for(int i=0;i<score.size();i++){
                q.push({score[i],i});
        }
        vector<string>a(score.size());
        int r=1;
        while(!q.empty()){
            int in=q.top().second;
            q.pop();
            if(r==1){
                a[in]="Gold Medal";
            }
            else if(r==2){
                a[in]="Silver Medal";
            }else if(r==3){
                a[in]="Bronze Medal";
            }else{
                a[in]=to_string(r);
            }
            r++;
        }
        return a;
        
    }
};