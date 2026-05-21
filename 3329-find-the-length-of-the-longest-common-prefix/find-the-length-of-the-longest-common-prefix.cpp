class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string>m;
        for(int i:arr1){
            string s=to_string(i);
            for(int i=1;i<=s.size();i++){
                m.insert(s.substr(0,i));
            }
        }
        int ans=0;
        for(int i:arr2){
            string s=to_string(i);
            for(int i=1;i<=s.size();i++){
                if(m.count(s.substr(0,i))){
                    ans=max(ans,i);
                }
            }
        }
        return ans;
    }
};