class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int oi=i*m+j;
                int ni=(k+oi)%(m*n);
                int nr=ni/m;//new row 
                int nc=ni%m ;//new col
                v[nr][nc]=grid[i][j];
            }
        }
        return v;
    }
};