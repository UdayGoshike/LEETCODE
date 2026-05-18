class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool v=false;
        int q=0;
        for(int i=0;i<s.size();i++){
            v=false;
            for(int j=q;j<t.size();j++){
                if(s[i]==t[j]){
                    v=true;
                    q=j+1;
                    break;
                }
            }
            if(!v){
                return false;
            }
        }
        return true;
    }
};