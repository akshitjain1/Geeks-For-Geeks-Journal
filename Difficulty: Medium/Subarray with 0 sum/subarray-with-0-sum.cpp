class Solution {
  public:
    // Function to check whether there is a subarray with 0-sum or not
    bool subArrayExists(vector<int>& arr) {
        unordered_set<int> map;
        int sum = 0;

        for (int num : arr) {
            sum += num;
            if (sum == 0 || map.count(sum)) {
                return true;  
            }
            map.insert(sum);
        }

        return false;  
    }
};
