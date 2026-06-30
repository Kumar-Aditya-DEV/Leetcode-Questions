class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        string s = words[0];
        vector<string> ans;

        for(char c : s) {
            int ind;
            bool found = true;

            for(int i = 1; i < words.size(); i++) {
                ind = words[i].find(c);

                if(ind == string::npos) {
                    found = false;
                    break;
                }
                else {
                    words[i].erase(ind, 1);
                }
            }

            if(found) {
                ans.push_back(string(1, c));
            }
        }
        return ans;
    }
};