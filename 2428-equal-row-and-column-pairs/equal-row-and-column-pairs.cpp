class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>m;
        for(auto row:grid){
            m[row]++;
        }
        int c=0;
        for(int i=0;i<grid.size();i++){
            vector<int>t;
            for(int j=0;j<grid.size();j++){
                t.push_back(grid[j][i]);
            }
            c+=m[t];
        }
        return c;
    }
};