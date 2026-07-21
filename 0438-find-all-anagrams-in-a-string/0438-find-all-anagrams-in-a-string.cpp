class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if(s.size() < p.size())
            return ans;

        vector<int> pCount(26, 0);
        vector<int> sCount(26, 0);

        int k = p.size();

        // Frequency of p
        for(int i = 0; i < k; i++) {
            pCount[p[i] - 'a']++;
        }

        // First window of s
        for(int i = 0; i < k; i++) {
            sCount[s[i] - 'a']++;
        }

        // Check first window
        if(sCount == pCount) {
            ans.push_back(0);
        }

        // Sliding Window
        for(int i = k; i < s.size(); i++) {

            // Add new character
            sCount[s[i] - 'a']++;

            // Remove old character
            sCount[s[i - k] - 'a']--;

            // Compare frequencies
            if(sCount == pCount) {
                ans.push_back(i - k + 1);
            }
        }
        return ans;
    }
};