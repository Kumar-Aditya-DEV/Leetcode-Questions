class Solution {
public:
    int binary(int lo, int hi, int target, vector<int>& arr){
            if(lo > hi) return -1;
            int mid = (lo + hi) / 2;
            if(arr[mid] > target) return binary(lo, mid-1, target, arr);
            else if(arr[mid] < target) return binary(mid+1, hi, target, arr);
            else return mid;
    }


    int search(vector<int>& arr, int target) {
        int n = arr.size();
        return binary(0, n-1, target, arr);
        // int n = nums.size();
        // int high = n-1, low = 0;
        // while(low <= high){
        //     int mid = (low + high) / 2;
        //     if(nums[mid] > target) high = mid - 1;
        //     else if(nums[mid] < target) low = mid + 1;
        //     else return mid;
        // }
        // return -1;
    }
};