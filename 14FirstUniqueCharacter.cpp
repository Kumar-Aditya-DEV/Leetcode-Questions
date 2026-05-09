class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> CounterStore;
        for(int i=0; i<s.size();i++){
            char ch = s[i];
            CounterStore[ch]++;
        }
        for(int i=0;i<s.size();i++){
            if(CounterStore[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};