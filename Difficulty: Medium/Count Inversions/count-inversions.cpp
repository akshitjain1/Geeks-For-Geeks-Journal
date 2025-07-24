class Solution {
public:
    long long merge(vector<int> &arr, int left, int mid, int right) {
        long long inv_count = 0;
        vector<int> temp;
        int i = left, j = mid + 1;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
                inv_count += (mid - i + 1);
            }
        }

        while (i <= mid) {
            temp.push_back(arr[i++]);
        }
        while (j <= right) {
            temp.push_back(arr[j++]);
        }

        for (int k = 0; k < temp.size(); k++) {
            arr[left + k] = temp[k];
        }
        return inv_count;
    }

    long long mergeSort(vector<int> &arr, int left, int right) {
        long long inv_count = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;
            inv_count += mergeSort(arr, left, mid);
            inv_count += mergeSort(arr, mid + 1, right);
            inv_count += merge(arr, left, mid, right);
        }
        return inv_count;
    }

    int inversionCount(vector<int> &arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};