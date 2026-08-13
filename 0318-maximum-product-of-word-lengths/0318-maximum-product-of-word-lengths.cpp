class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans = 0;

        for(int i = 0; i < words.size(); i++) {

            vector<int> freq1(26, 0);

            for(char ch : words[i]) {
                freq1[ch - 'a'] = 1;
            }

            for(int j = i + 1; j < words.size(); j++) {

                vector<int> freq2(26, 0);

                for(char ch : words[j]) {
                    freq2[ch - 'a'] = 1;
                }

                bool common = false;

                for(int k = 0; k < 26; k++) {
                    if(freq1[k] && freq2[k]) {
                        common = true;
                        break;
                    }
                }

                if(!common) {
                    ans = max(ans, (int)words[i].size() * (int)words[j].size());
                }
            }
        }
        return ans;
    }
};