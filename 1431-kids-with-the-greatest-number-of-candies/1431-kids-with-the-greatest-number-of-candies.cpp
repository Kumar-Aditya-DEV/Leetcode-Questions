class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> ans;
        for(int i = 0; i < candies.size(); i++) {
            bool greatest = true;
            for(int j = 0; j < candies.size(); j++) {

                if(candies[i] + extraCandies < candies[j]) {
                    greatest = false;
                    break;
                }
            }
            ans.push_back(greatest);
        }
        return ans;
    }
};