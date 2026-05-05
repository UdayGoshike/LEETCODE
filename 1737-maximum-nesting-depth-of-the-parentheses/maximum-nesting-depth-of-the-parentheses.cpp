class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c==')'){
                
                int n=st.size();
                maxi=max(maxi,n);
                st.pop();
            }else if (c=='('){
                st.push(c);
                
            }
        }
        return maxi;
    }
};