class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> obj;
        int maxelement = -1;
        for(int i : arr){
            obj[i]++;
        }
        for(auto& it : obj){
            if(it.first == it.second){
                maxelement = max(maxelement, it.first);
            }
        }
        return maxelement;
    }
};