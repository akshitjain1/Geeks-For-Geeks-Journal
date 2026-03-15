class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        vector<int> result;
        for(int i=1; i<= sqrt(n); i++){
            if(n%i == 0){
                result.push_back(i);
                if(n/i!=i){
                    result.push_back(n/i);
                }
            }
        }
        sort(result.begin(), result.end());
        for(int i =  0 ; i<result.size(); i++){
            cout<<result[i]<<" ";
        }
        
    }
};