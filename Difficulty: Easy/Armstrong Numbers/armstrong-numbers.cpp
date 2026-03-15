// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int sum = 0;
        int org = n;
        while(n!=0){
            int digit = n%10;
            digit = digit * digit * digit;
            sum = sum + digit;
            n = n/10;
        }
        if(sum == org){
            return true;
        }
        return false;
    }
};