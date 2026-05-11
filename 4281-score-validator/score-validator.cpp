class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> v;
        int s = 0;
        int c = 0;
        for (int i = 0; i < events.size(); i++) {
            if (events[i] == "1" || events[i] == "2" || events[i] == "3" ||
                events[i] == "4" || events[i] == "5" || events[i] == "6") {
                if (c < 10) {
                    int j = stoi(events[i]);
                    s += j;
                }

            } else if (events[i] == "W" && c < 10) {
                c++;
            } else if (events[i] == "WD" || events[i] == "NB") {
                if (c < 10) {
                    s++;
                }
            }
        }
        v.push_back(s);
        v.push_back(c);
        return v;
    }
};