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
        for(int i=0;i<v.size();i++){
            c+=(v[i].second*(i/8 +1));
        }
        return c;
    }
};