class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(discounts.begin(),discounts.end());
        sort(prices.begin(),prices.end());
        int r=discounts.size()-1;
        int l=prices.size()-1;
        double s=0;
        while(l>=0){
            if(r>=0){
                s+=((prices[l]*(100-discounts[r]))/100.0);
                r--;
            }else{
                s+=prices[l];
            }
            l--;

        }
        return s;
    }
};