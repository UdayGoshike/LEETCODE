class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a=strs[0];
        for(int i=1;i<strs.size();i++){
            string t=strs[i];
            for(int j=0;j<min(a.size(),strs[i].size());j++){
                if(t[j]!=a[j]){
                    a.erase(a.begin()+j,a.end());
                    
                }
                
                
            }
            if(a.size()>t.size()){
                    a.erase(t.size());
                }
            
            
        }
        return a;
    }
};