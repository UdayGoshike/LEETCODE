class Solution {
public:
    string reverseWords(string s) { 
        vector<string>v;
        string t="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                t+=s[i];
            }else if(s[i]==' ' && t!=""){
                v.push_back(t);
                t.clear();
            }
            
        }
        if(t!=""){
            v.push_back(t);
        }
        reverse(v.begin(),v.end());
        string a="";
        for(int i=0;i<v.size();i++){
            a+=v[i];
            if(i!=v.size()-1){
                a+=" ";
            }
        }
        return a;
    }
};