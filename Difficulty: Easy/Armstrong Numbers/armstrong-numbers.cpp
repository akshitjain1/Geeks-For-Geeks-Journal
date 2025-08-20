// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        long num = 0;
        int temp = n;
        while(n != 0){
            int digit = n % 10;
            num = num + (digit*digit*digit);
            n = n/10;
        }
        if(num == temp)return true;
        
        return false;
    }
};