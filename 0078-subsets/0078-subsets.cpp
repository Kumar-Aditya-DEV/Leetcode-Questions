class Solution {
public:
    void powerSet(int idx, vector<int> ans, vector<int>& arr, vector<vector<int>>& finalAns){
        if(idx == arr.size()){ // i have a subset
            finalAns.push_back(ans);
            return;
        }
        powerSet(idx+1, ans, arr, finalAns);  // skip
        ans.push_back(arr[idx]);
        powerSet(idx+1, ans, arr, finalAns);  // pick
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<int> ans;
        vector<vector<int>> finalAns;
        powerSet(0, ans, arr, finalAns);
        return finalAns;
    }
};