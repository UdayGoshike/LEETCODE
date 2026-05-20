class Solution {
public:
    bool iv(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
        int v=0;
        int a=0;
        for(int i=0;i<k;i++){
            if(iv(s[i])){
                v++;
            }
        }
        a=max(a,v);
        for(int i=k;i<s.size();i++){
            if(iv(s[i])){
                v++;
            }
            if(iv(s[i-k])){
                v--;
            }
            a=max(a,v);
        }
        return a;
        
    }
};