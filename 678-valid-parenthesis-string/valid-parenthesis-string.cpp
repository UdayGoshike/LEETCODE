class Solution {
public:
    // RECURSIVE WAY O(3^N)

    // bool h(string s,int in,int c){
    //     if(c<0){
    //         return false;
    //     }
    //     if(in ==s.size()){
    //         return c==0;
    //     }
    //     if(s[in]=='('){
    //          return h(s,in+1,c+1);
    //     }
    //     if(s[in]==')'){
    //        return h(s,in+1,c-1);
    //     }
    //     return h(s,in+1,c+1)||h(s,in+1,c-1)||h(s,in+1,c);
    // }
    bool checkValidString(string s) {
        // return h(s,0,0);
        int min = 0;
        int max = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                min++;
                max++;
            } else if (s[i] == ')') {
                
                if (min > 0) {
                    min--;
                }
                max--;
                if ( max<0) {
                    return false;
                } 
            } else {
                if (min > 0) {
                    min--;
                    max++;
                } else {
                    max++;
                }
            }
        }
        return min == 0;
    }
};