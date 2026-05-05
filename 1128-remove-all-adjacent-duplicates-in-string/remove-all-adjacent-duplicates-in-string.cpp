class Solution {
public:
    string removeDuplicates(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(!st.empty() && st.top()==ch){
                s.erase(i,1);
                i--;
                s.erase(i,1);
                i--;
                st.pop();
            }else{
                st.push(ch);
            }
        }
        return s;
    }
};