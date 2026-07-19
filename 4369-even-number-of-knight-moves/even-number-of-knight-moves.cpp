class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int x = target[0] - start[0];
        int y = target[1] - start[1];
        if (x==y ||( (x+y)%2==0)) {
            return true;
        }
        return  false;
    }
};