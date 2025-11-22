class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
    int maxi = arr[0];
    int secondMaxi = -1;
    for(int x: arr){
        if(x > maxi){
           secondMaxi = maxi;
            maxi = x;
        } else if( x > secondMaxi && x != maxi){
             secondMaxi = x;
        }
    }
    return secondMaxi;
    }
};
