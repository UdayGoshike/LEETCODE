class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        unordered_map<char,int>mc;
        for(char c:target){
            mc[c]++;
        }
        int a=100;
        for(auto &i:mc){
            if(m.count(i.first)){
                a=min(a,m[i.first]/i.second);
            }else{
                return 0;
            }
        }
        return a;



    }
};