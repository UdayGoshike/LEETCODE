class Solution {
public:
    bool checkGoodInteger(int n) {
        int ds=0;
        long long ss=0;
        while(n>0){
            ds+=n%10;
            ss+=(n%10)*(n%10);
            n/=10;
        }
        return (ss-ds)>=50?true:false;
    }
};