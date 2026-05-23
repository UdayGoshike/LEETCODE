class Solution {
public:
    string decodeString(string s) {
        stack<int>si;
        stack<string>ss;
        int n=0;
        string st="";
        for(char c:s){
            
            if(isdigit(c)){
                n=n*10+(c-'0');
            }else if (c=='['){
                si.push(n);
                ss.push(st);
                n=0;
                st="";
            }else if (c==']'){
                int k=si.top();
                si.pop();
                string rep=ss.top();
                ss.pop();
                string t="";
                for(int i=0;i<k;i++){
                    t+=st;
                }
                st=rep+t;
            }else{
                st+=c;
            }
            
        }
        return st;
    }
};