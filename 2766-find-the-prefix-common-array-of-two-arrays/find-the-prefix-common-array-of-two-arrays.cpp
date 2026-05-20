class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>f(A.size()+1,0);
        vector<int>c;
        int co=0;
        for(int i=0;i<A.size();i++){
            
            f[A[i]]++;
            f[B[i]]++;
            if(i==0){
                if(f[A[i]]==2){
                    co++;
                    
                }
                c.push_back(co);

            }else{
                if(f[A[i]]==2){
                    co++;
                    
                }if(A[i]!=B[i] && f[B[i]]==2){
                    co++;
                    
                }
                c.push_back(co);
            }
        }
        return c;
    }
};