
class Solution {
public:
    int count = 0;

    void merge(vector<int>& a, vector<int>& b, vector<int>& c) {
        int i = 0, j = 0, k = 0;

        while (i < a.size() && j < b.size()) {
            if (a[i] <= b[j])
                c[k++] = a[i++];
            else
                c[k++] = b[j++];
        }

        while (i < a.size()) c[k++] = a[i++];
        while (j < b.size()) c[k++] = b[j++];
    }

    void mergeSort(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return;

        vector<int> a(arr.begin(), arr.begin() + n / 2);
        vector<int> b(arr.begin() + n / 2, arr.end());

        mergeSort(a);
        mergeSort(b);

        int j = 0;
        for (int i = 0; i < a.size(); i++) {
            while (j < b.size() &&
                   (long long)a[i] > 2LL * b[j]) {
                j++;
            }
            count += j;
        }

        merge(a, b, arr);
    }

    int reversePairs(vector<int>& nums) {
        count = 0;
        mergeSort(nums);
        return count;
    }
};
