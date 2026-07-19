class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1){
            return s;
        }
        long long st=s;
        long long  no=n/2;
        st+=m;
        no--;
        m--;
        st=st+(m*no);
        return st;
    }
};