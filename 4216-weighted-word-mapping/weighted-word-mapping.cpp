class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s="";
        for(int i=0;i<words.size();i++){
            string q=words[i];
            int w=0;
            for(int j=0;j<q.size();j++){
                 w+=weights[q[j]-'a'];
            }
            w%=26;      
            s+=char('z'-w);
        }
        return s;
    }
};