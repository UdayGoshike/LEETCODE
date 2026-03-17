class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s=-1;
        int tg=0,tc=0;
        for(int i=0;i<gas.size();i++){
            tg+=gas[i];
            tc+=cost[i];
        }
        if(tg<tc)return -1;
        int gt=0;
        int r=0;
        for(int i=0;i<gas.size();i++){
            gt+=gas[i]-cost[i];
            if(gt<0){
                gt=0;
                r=i+1;
            }
        }
        return r;
    }
};

        // int s=-1;
        // int ga=0;
        // int co=0;
        // bool v=false;
        // for(int i=0;i<gas.size();i++){
        //     ga+=gas[i];
        //     co+=cost[i];
        //     if(gas[i]>=cost[i] && v==false){
        //         s=i;
        //         v=true;
        //     }
        // }
        // if(ga<co){l
        //     return -1;
        // }else{
        //     return s;
        // }
        // if(s==-1){
        //     return -1;
        // }
        // int i=s;
        // int g;
        // int c=0;
        // while(i%s!=0){
        //      g+=gas[i%s];
        //     c=cost[i%s];
        //     if(g<c){
        //         return -1;
        //     }else{
        //         g-=c;
        //     }
        //     i++;
        // }
        // return s;
    