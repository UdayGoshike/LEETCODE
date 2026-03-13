class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() == 1)
            return 1;
        int c = 1;
        int l = 1;
        int in=0;

        
        while (l < chars.size()) {
            if (chars[l] == chars[l - 1]) {
                c++;
            } else {
                chars[in++]=chars[l-1];
                if (c > 1) {
                    string s = to_string(c);
                    for (int i = 0; i < s.size(); i++) {
                        chars[in++]=s[i];
                    }
                }
                c = 1;
            
            }

            l++;
        }
        
         chars[in++]=chars[l-1];
        
        if (c > 1) {
            string s = to_string(c);
            for (int i = 0; i < s.size(); i++) {
                chars[in++]=s[i];
            }
            
        }
        chars.erase(chars.begin()+in,chars.end());
       

        return chars.size();
    }
};