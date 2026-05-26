class Solution {
public:
    int numberOfSpecialChars(string word) {
        int co=0;
        set<char>ls;
        set<char>us;
        for(char c:word){
            if(c>='a'&& c<='z'){
                ls.insert(c);
            }else if (c>='A' && c<='Z' ){
                 us.insert(c);
            }
        }
        for(char a='A';a<='Z';a++){
            if(us.count(a) && ls.count(a+32)){
                co++;
            }
        }
        return co;
    }
};