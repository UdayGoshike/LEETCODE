class Solution {
public:

    int myAtoi(string s) {
        int a = 0;
        int i = 0;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        int sign = 1;
        if (s[i] == '-'||s[i]=='+') {
            if(s[i]=='-'){
                 sign = -1;
            }
           
            i++;
        }
        while(i<s.size() && s[i]=='0'){
            i++;
        }
        while(i<s.size() && (s[i]<='9'&&s[i]>='0')){
           if(a>INT_MAX/10 || a==INT_MAX/10  && (s[i]-'0')>7){
                return sign==1?INT_MAX:INT_MIN;
            }
            a=a*10+(s[i]-'0');
            
            i++;
        }
         
        return sign*a;
    }
};