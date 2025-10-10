class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        for(int i = 0 ;  i <= arr.size()-2 ;i++){
            int mini = i;
            for(int j = i ; j<arr.size(); j++){
                if(arr[j]< arr[mini]){
                    mini = j;
                }
            }
            swap(arr[i], arr[mini]);
        }
    }
};