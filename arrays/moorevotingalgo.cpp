#include<iostream>
#include<vector>
using namespace std;
int moores(const vector<int>&nums){
int ans = 0;
int freq = 0;
for(int i =0;i<nums.size();i++){
  if(freq==0){
    ans = nums[i];
  }
  if(ans==nums[i]){
    freq++;
  }
  else{
    freq--;
  }
}
return ans;
}
int main(){
  vector<int> nums = {1,1,2,2,2};
  cout<<moores(nums)<<endl;
}