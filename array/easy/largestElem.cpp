class Solution {
  public:
    int largest(vector<int> &arr) {
        int maxi = arr[0];
        for(int x :arr){
            if(x > maxi){
                maxi = x;
            }
        }
         return maxi;
    }

};
