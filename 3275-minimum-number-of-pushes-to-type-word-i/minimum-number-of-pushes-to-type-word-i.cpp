class Solution {
public:
    int minimumPushes(string word) {
        int c=0;
        int s=word.size();
        int co=1;
        while(s>8){
            c+=(co*8);
            s-=8;
            co++;
        }
        c=c+(co*s);
        return c;
    }
};