#include<iostream>
#include<vector>
using namespace std;
int stock(const vector<int>&nums){
  int max_profit = 0;
  int bestbuy = nums[0];
  for(int i =1;i<nums.size(); i++){
    if(nums[i]>bestbuy){
      max_profit = max(max_profit,nums[i]-bestbuy);
    }
    bestbuy = min(nums[i],bestbuy);
  }
  return max_profit;
}
int main(){
  vector<int> nums = {7,1,5,3,6,4};
  cout<<"the max profit is : "<<stock(nums)<<" "<<endl;
}