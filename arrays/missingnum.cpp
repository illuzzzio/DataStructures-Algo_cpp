#include<iostream>
#include<vector>
using namespace std;
int missingnum(const vector<int>&nums){
  int n = nums.size();
  int original_sum = 0 ;
  int natural_sum = n*(n+1)/2;
  for(int i =0;i<n;i++){
    original_sum +=nums[i];

  }
  return natural_sum - original_sum;
}
int main(){
  vector<int> nums = {3,0,1};
  cout<<"The missing number is : "<<missingnum(nums)<<endl;
}