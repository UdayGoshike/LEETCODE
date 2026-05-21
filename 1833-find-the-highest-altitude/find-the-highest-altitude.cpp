class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a=0;
        int q=0;
        for(int i=0;i<gain.size();i++){
            q+=gain[i];
            a=max(a,q);
        }
        return a;
    }
};