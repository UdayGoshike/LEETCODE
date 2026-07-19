class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string st="";
        unordered_map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        while(m[y]!=0){
            st+=y;
            m[y]--;
        }
         while(m[x]!=0){
            st+=x;
            m[x]--;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]!=x && s[i]!=y){
                st+=s[i];
            }
        }
        return st;

    }
};