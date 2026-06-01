class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());

        
        int c=0;
        for(int i=cost.size()-1;i>=0;i-=3){
            c+=cost[i];
            if(i-1>=0){
                c+=cost[i-1];
            }
            
        }
        return c;

    }
};