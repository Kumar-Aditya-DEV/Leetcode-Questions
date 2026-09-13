class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        int lo = 0, hi = n - 1;

        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            // Boundary check
            if(mid == 0 || mid == n - 1 ||
               (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])) {
                return arr[mid];
            }

            int f = mid, s = mid;

            if(arr[mid] == arr[mid - 1]) f = mid - 1;
            else s = mid + 1;

            // left side length = f - lo
            if((f - lo) % 2 == 1) hi = f - 1;
            else lo = s + 1;
        }
        return -1;
    }
};