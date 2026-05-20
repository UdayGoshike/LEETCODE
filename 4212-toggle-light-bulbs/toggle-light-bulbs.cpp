class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        set<int>s;
        for(int i=0;i<bulbs.size();i++){
            if(s.find(bulbs[i])==s.end()){
                s.insert(bulbs[i]);
            }else{
                s.erase(bulbs[i]);
            }
            
        }
        bulbs.clear();
        for(int i:s){
            bulbs.push_back(i);
        }
        return bulbs;
        
    }
};