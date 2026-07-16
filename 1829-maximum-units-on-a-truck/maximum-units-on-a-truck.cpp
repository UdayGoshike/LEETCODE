class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int ,int>>v;
        for(int i=0;i<boxTypes.size();i++){
            v.push_back({boxTypes[i][1],i});
        }
        sort(v.begin(),v.end(),greater<pair<int ,int>>());
        int a=0;
        for(auto i:v){
            int in=i.second;
            if(boxTypes[in][0]<=truckSize){
                a+=boxTypes[in][0]*boxTypes[in][1];
                truckSize-=boxTypes[in][0];
            }else{
                a+=boxTypes[in][1]*truckSize;
                break;
            }
        }
        return a;
    }
};