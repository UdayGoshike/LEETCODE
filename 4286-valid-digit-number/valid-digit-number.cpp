class Solution {
public:
    bool validDigit(int n, int x) {
        string s=to_string(n);
        char c=x+'0';
        if(s[0]==c){
            return false;
        }
        if(s.find(c)!=string::npos){
            return true;
        }
        return false;
        
        
    }
};