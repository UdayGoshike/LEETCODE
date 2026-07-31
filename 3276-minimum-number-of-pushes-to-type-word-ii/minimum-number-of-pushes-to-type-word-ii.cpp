class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>m;
        
        for(int i=0;i<word.size();i++){
            m[word[i]]++;
        }
        vector<pair<char,int>>v(m.begin(),m.end());
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        int c=0;
        int s=0;
        int co=1;
        for(auto i:v){
              s++;
            if(s==9){
                s=1;
                co++;
                c+=(i.second*co);

            }else{
              
                c+=(i.second*co);
            }
        }
        return c;
    }
};