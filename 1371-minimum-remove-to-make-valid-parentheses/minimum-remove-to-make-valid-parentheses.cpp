class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(st.empty()&& ch==')'){
                s.erase(i,1);
                i--;
            }else if(ch=='('){
                st.push(ch);
            }else if (ch==')'&& st.top()=='('){
                st.pop();
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            char c=s[i];
            if(!st.empty() && st.top()==c){
                s.erase(i,1);
                st.pop();
            }
        }
        return s;
    }
};