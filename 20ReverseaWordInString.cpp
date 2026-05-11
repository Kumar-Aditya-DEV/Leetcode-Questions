class Solution {
public:
    string reverseWords(string s) {
        vector<string> wordStore;
        string temp = "";

        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                temp += s[i];
            } else {
                if(temp != ""){
                    wordStore.push_back(temp);
                    temp = "";
                }
            }
        }
        if(temp != ""){
            wordStore.push_back(temp);
        }
        string result = "";
        for(int i = wordStore.size() - 1; i >= 0; i--){
            result += wordStore[i];
            if(i != 0) result += " ";
        }
        return result;
    }
};