class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()){
            return false;
        }
        vector<int>s1,s2;
        unordered_map<char,int>m;
        for(int i=0;i<word1.size();i++){
            m[word1[i]]++;
        }
        unordered_map<char,int>m1;
        for(int i=0;i<word2.size();i++){
            m1[word2[i]]++;
        }
        for(auto i:m){
            if(m1.find(i.first)==m1.end()){
                return false;
            }
        }
        for(auto i:m1){
            if(m.find(i.first)==m.end()){
                return false;
            }
        }
        for(auto i:m){
            s1.push_back(i.second);
        }
        for(auto i:m1){
            s2.push_back(i.second);
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        return s1==s2;
    }
};