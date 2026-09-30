class Solution {
public:
    int compress(vector<char>& s) {
        string ans = "";
        int i = 0, j = 0;
        int n = s.size();

        while (j < n) {
            if (s[j] == s[i]) {
                j++;
            } 
            else {
                int len = j - i;

                ans.push_back(s[i]);

                if (len != 1) {
                    ans += to_string(len);
                }

                i = j;
            }
        }

        // Last group
        int len = j - i;

        ans.push_back(s[i]);

        if (len != 1) {
            ans += to_string(len);
        }

        // Copy answer back into s
        vector<char> ans2;

        for (char ch : ans) {
            ans2.push_back(ch);
        }

        s = ans2;

        return s.size();
    }
};