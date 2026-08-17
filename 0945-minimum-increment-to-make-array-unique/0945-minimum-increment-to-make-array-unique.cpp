class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int last = -1;
        for(int x : nums) {
            if(x <= last) {
                ans += last + 1 - x;
                last++;
            }
            else {
                last = x;
            }
        }
        return ans;
    }
};