class Solution {
  public:
    void print_divisors(int n) {
        vector<int> divisors;
        
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i != n / i) {  // avoid duplicate for perfect squares
                    divisors.push_back(n / i);
                }
            }
        }
        
        sort(divisors.begin(), divisors.end());  // print in increasing order
        
        for (int d : divisors) {
            cout << d << " ";
        }
    }
};
