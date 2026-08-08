class Solution {
public:
    int candy(vector<int>& ratings) {
       vector<int>l;
       l.push_back(1);
       for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]){
                l.push_back(l[i-1]+1);
            }else{
                l.push_back(1);
            }
       } int s=0;
       s=max(1,l[ratings.size()-1]);
       int te=1;
       for(int i=ratings.size()-2;i>=0;i--){
        if(ratings[i]>ratings[i+1]){
            te++;
        }else{
            te=1;
        }
        s+=max(te,l[i]);
       }
       return s;
    }
};