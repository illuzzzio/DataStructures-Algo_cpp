#include <iostream>
#include<vector>
using namespace std;
int maxsubarraysum(const vector<int>&nums){
  int max_sum = INT_MIN; // for latter unreal comparision for findin max out of two// minus infinity//
  int new_sum = 0;
  for(int i=0;i<nums.size();i++){
    new_sum+=nums[i];
    max_sum = max(new_sum,max_sum); // the unreal comparison xD//
    // waht if the numbers are negative , we know if the negative number is added to a positive number it will only decrease the value , so as soon as we get our new_sum negative , we just reject it , but reinitialising new_sum = 0;
    if(new_sum<0){
      new_sum = 0;
    }
  }
  return new_sum;
}
int main(){
  vector<int> nums = {1,2,3,4,-6,5};
  int result = maxsubarraysum(nums);
  cout<<"the maximum subarray sum is: "<<result<<endl;


}