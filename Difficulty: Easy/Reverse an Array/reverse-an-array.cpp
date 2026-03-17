class Solution {
  public:
    void reverse(int i, int n, vector<int>& arr){
        if(i>=n/2)return;
        swap(arr[i], arr[n-i-1]);
        reverse(i+1, n, arr);
    }
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        reverse(0,n,arr);
    }
};