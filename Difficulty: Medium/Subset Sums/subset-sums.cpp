class Solution {
  public:
    void func(vector<int> arr, vector<int>& result , int index ,int currentsum ){
        if(index == arr.size()){
            result.push_back(currentsum);
                return;
        } 
      
        //include.
        func(arr,result,index+1, currentsum+arr[index]);
    
        //Exclude.
        func(arr,result,index+1,currentsum);
        
        
    };

    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector <int> sum;
        func(arr,sum,0,0);
        return sum;
    }
};