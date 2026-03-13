class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() == 1)
            return 1;
        int c = 1;
        int l = 1;

        vector<char> a;
        while (l < chars.size()) {
            if (chars[l] == chars[l - 1]) {
                c++;

            } else{
                a.push_back(chars[l - 1]);
                if (c > 1) {
                    string s = to_string(c);
                    for (int i = 0; i < s.size(); i++) {
                        a.push_back(s[i]);
                    }
                }
                c = 1;
            } 
             
            l++;
        }
        a.push_back(chars[l-1]);
        if (c > 1) {
                    string s = to_string(c);
                    for (int i = 0; i < s.size(); i++) {
                        a.push_back(s[i]);
                    }
                }
        chars = a;

        return chars.size();
    }
};