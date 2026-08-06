class Solution {
public:
bool h(int n,int t){
    int te=1;
    while(n!=0){
        te*=(n%10);
        n/=10;
    }

    return !(te%t);
}
    int smallestNumber(int n, int t) {
        while(!h(n,t)){
            n++;
        }
        return n;
    }
};