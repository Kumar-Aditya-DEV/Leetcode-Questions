class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int lo = 1, hi = n-2;
        while(lo <= hi){
            int m = lo + (hi - lo) / 2;
            if(arr[m-1] < arr[m] && arr[m] < arr[m+1])    lo = m + 1;
            else if(arr[m-1] > arr[m] && arr[m] > arr[m+1])     hi = m-1;
            else return m;
        }
        return 2222;
    }
};