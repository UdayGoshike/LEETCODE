class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int i = 0;
        while (i < flowerbed.size()) {
            if (flowerbed[i] == 0) {
                bool l = (i == 0 || flowerbed[i - 1] == 0);
                bool r = (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0);
                if (l == true && r == true) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
            i++;
        }
        return n <= 0;
    }
};