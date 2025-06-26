#include<iostream>
#include<vector>
using namespace std;
vector<int> twosum(const vector<int>&nums, int target){
  int left = 0;
  int right = nums.size()-1;
  while(right>left){
  int sum = nums[left]+ nums[right];

    if(sum<target){
      left++;
    }
    else if(sum>target){
      right--;
    }
    else{
      return {left,right};
    }
  }
   return {left,right};

}
int main(){
  vector<int> nums = {1,2,3,4,5,6};
  int target = 9;
  vector<int> result = twosum(nums,target);
  cout<<result[0]<<","<<result[1];
}  //very important / /