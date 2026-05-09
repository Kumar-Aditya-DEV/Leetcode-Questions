class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m4;
        unordered_map<char, char> m5;

        for(int i=0;i<s.length(); i++){
            char ch1 = s[i];
            char ch2 = t[i];

            if(m4.count(ch1) && m4[ch1] != ch2){
                return false;
            }

            if(m5.count(ch2) && m5[ch2] != ch1){
                return false;
            }

            m4[ch1] = ch2;
            m5[ch2] = ch1;
        }
        return true;
    }
};