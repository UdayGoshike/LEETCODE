class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>m;
        for(int i=0;i<word.size();i++){
            char c=word[i];
            if(c>='a' && c<='z'){
                // if(ls.count({c})){
                //     ls.insert({c,i});
                // }
                m[c]=i;
                
            }
            else if(c>='A' && c<='Z'){
                if(!m.count(c)){
                    m[c]=i;
                }
            }
        }
        int co=0;
        for(char c='A';c<='Z';c++){
            if(m.count(c) && m.count(c+32)){
                if(m[c]>m[c+32]){
                    co++;
                }
            }
        }
        return co;
    }
};