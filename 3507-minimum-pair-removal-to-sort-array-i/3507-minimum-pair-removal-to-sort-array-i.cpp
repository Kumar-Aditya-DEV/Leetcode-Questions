class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
         int count = 0;

        while(true) {
            bool sorted = true;

            for(int i = 1; i < nums.size(); i++) {
                if(nums[i] < nums[i - 1]) {
                    sorted = false;
                    break;
                }
            }

            if(sorted) return count;
            int index = 0;

            for(int i = 1; i < nums.size(); i++) {
                if(nums[i] + nums[i - 1] <
                   nums[index] + nums[index + 1]) {
                    index = i - 1;
                }
            }
            nums[index] = nums[index] + nums[index + 1];
            nums.erase(nums.begin() + index + 1);
            count++;
        }
    }
};