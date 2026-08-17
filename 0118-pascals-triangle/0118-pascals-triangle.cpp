class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans;
       for(int i=1; i<=numRows; i++){
        ans.push_back(vector<int>(i,1));
       }
    //  Fill the pascal triangle
    for(int i=2; i<ans.size(); i++){     // 2 se start kiya due to upar wale for loop jisme 1 print ho raha hai 
        for(int j=0; j<ans[i].size(); j++){
            if(j != 0 && j != ans[i].size()-1)  ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
    }

    return ans;
    }
};