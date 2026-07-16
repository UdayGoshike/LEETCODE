class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0;
        int t=0;
        int tw=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                f++;
            }else if(bills[i]==10){
                if(f<1){
                    return false;
                }else{
                    t++;
                    f--;
                }
            }else if (bills[i]==20){
                
                if(t>0 && f>0){
                    t--;
                    f--;

                }else if(f>2){
                    f-=3;
                }else{
                    return false;
                }
                tw++;
            }
        }
        return true;
    }
};