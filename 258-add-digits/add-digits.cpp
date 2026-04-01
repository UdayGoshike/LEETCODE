class Solution {
public:
    int addDigits(int num) {
        int s=0;
        while(num!=0){
            s+=(num%10);
            num=num/10;
        }
        int q=s;
        if(s>9){
         q=addDigits(s);
        }
        return q;
    }
};