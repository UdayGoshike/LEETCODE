class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int l=0;
        int a=0;
        for(int i=0;i<s.size();i++){
            while(st.count(s[i])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[i]);
            a=max(a,i-l+1);

        }
        return a;
    }
};