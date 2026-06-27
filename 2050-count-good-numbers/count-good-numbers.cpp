class Solution {
public:
 long long mod=1e9+7;
long long po(long long n,long long x){
    if(x==0){
        return 1;
    }
    long long a=po(n,x/2);
    if(x%2==0){
        return (a*a)%mod;
    }else{
        return (n*((a*a)%mod)%mod);
    }
}
    int countGoodNumbers(long long n) {
        long long o=n/2;
        long long  e=(n+1)/2;
       
        return (po(5,e)*po(4,o))%mod;
    }
};