class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        unordered_set<int> count;
        for(int value : arr){
            freq[value]++;
        }
        for(auto it : freq){
            count.insert(it.second);
        }
        return count.size() == freq.size();
    }
};