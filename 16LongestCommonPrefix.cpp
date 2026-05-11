class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string subString = strs[0];
        for(int i=0;i<strs.size();i++){
            while(strs[i].find(subString) != 0){
                subString.pop_back();
                if(subString.empty()) return "";
            }
        }
        return subString;
    }
};