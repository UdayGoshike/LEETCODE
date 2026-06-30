class Solution {
public:
    int numberOfSubstrings(string s) {
        int c=0;
        vector<int>ch(3,-1);
        for(int i=0;i<s.size();i++){
            ch[s[i]-'a']=i;
            c=c+(1+min(ch[0],min(ch[1],ch[2])));
        }
        return c;
    }
};