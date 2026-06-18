class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        double q=(hour*60*0.5)+(0.5*minutes)-(minutes*6);
        return min(abs(q),360-abs(q));
    }
};