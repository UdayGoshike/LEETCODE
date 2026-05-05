class Solution {
public:
    int minAddToMakeValid(string s) {
        // int o=0;
        // int c=0;
        // for(int i=0;i<s.size();i++){
        //     char ch=s[i];
        //     if(ch=='('){
        //         o++;
        //     }else{
        //         c++;
        //     }
        // }
        // return abs(o-c)
        int count=0;
        stack<int>st;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(st.empty() && c=='('){
                st.push(c);
            }else if (st.empty()&& c==')'){
                count++;
            }else if (st.top()=='('&& c==')'){
                st.pop();
            }else{
                st.push(c);
            }
        }
        return count+st.size();
    }
};