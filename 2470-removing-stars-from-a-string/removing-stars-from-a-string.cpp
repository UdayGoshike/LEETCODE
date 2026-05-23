class Solution {
public:
    string removeStars(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'&&!st.empty()){
                st.pop();
            }else if (s[i]=='*' && st.empty()){
                i++;
            }
            else{
                st.push(s[i]);
            }
        }
        string a="";
        while(!st.empty()){
            a.insert(a.begin(),st.top());
            st.pop();
        }
        return a;
    }
};