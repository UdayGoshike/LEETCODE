class Solution {
public:
    string smallestSubsequence(string s) {
     vector<int>l(26,-1);
        for(int i=0;i<s.size();i++){
            l[s[i]-'a']=i;
        }
        vector<bool>li(26,false);
        string st="";
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(li[c-'a']==true){
                continue;//element already placed
            }
            while(!st.empty()&& l[st.back()-'a']>i && st.back()>c){
                li[st.back()-'a']=false;
                st.pop_back();
            }
            st+=c;
            li[c-'a']=true;

        }
        return st;
    }
};