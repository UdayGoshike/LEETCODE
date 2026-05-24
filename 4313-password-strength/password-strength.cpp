class Solution {
public:
    int passwordStrength(string password) {
        int a=0;
        unordered_set<char>s;
        for(char c:password){
            if(s.count(c)){
                continue;
            }
            s.insert(c);
            if(c>='a'&&c<='z'){
                a+=1;
            }
            if(c>='A'&&c<='Z'){
                a+=2;
            }
            if(c>='0'&&c<='9'){
                a+=3;
            }
            if(c=='!'||c=='@'||c=='#'||c=='$'){
                a+=5;
            }
        }
        return a;
    }
};