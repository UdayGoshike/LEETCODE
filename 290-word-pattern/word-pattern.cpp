class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m;
        unordered_map<string,char>mp;
        stringstream stss(s);
        vector<string>w;
        string e;
        while(stss>>e){
            w.push_back(e);
        }
        if(pattern.size()!=w.size()){
            return false;
        }
        for(int i=0;i<pattern.size();i++){
            char c=pattern[i];
            string a=w[i];
            if(m.count(c) && m[c]!=a){
                return false;
            }
            if(mp.count(a) && mp[a]!=c){
                return false;
            }
            m[c]=a;
            mp[a]=c;
        }
        return true;
    }
};