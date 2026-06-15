class Solution {
public:
    bool pa(string &s,int l,int r){
        while(l<=r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        string b="";
        int a=0;
        for(int r=s.size()-1;r>=0;r--){
            for(int l=0;l<=r;l++){
                
                if(pa(s,l,r)){
                    if((r-l+1)>a){
                        b=s.substr(l,r-l+1);
                        a=b.size();
                    }
                }
            }
        }
        return b;
    }
};