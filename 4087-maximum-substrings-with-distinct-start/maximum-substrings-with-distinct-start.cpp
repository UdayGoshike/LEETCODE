class Solution {
public:
    int maxDistinct(string s) {
        set<char>e;
        for(char i:s){
            e.insert(i);
        }
        return e.size();
    }
};