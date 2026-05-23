class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        for(int i=0;i<asteroids.size();i++){
            if(s.empty()){
                s.push(asteroids[i]);
            }else{
                bool q=true;
                while(!s.empty() && (s.top()>0 && asteroids[i]<0)){
                    
                    if(s.top()<abs(asteroids[i])){
                        s.pop();
                    }else if (s.top()==abs(asteroids[i])){
                        s.pop();
                        q=false;
                        break;
                    }else if (s.top()>abs(asteroids[i])){
                        q=false;
                        break;
                    }
                }
                if(q){
                    s.push(asteroids[i]);
                }
            }
        }
        vector<int>v;
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};