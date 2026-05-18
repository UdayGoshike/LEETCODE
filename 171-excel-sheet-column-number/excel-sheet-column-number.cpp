class Solution {
public:
    int titleToNumber(string columnTitle) {
        int a=0;
        for(char i:columnTitle){
            int v=i-'A'+1;
            a=a*26+v;
        }
        return a;
    }
};