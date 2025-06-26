#include<iostream>
#include<vector>
using namespace std;
int majority(const vector<int>&nums){
  int n = nums.size()/2;
  for(int val:nums){
    int freq =0;
    for(int el : nums){
      if(el==val){
        freq++;
        
      }
      if(freq>n){
        return freq;
      }

    }
  }
  
}
int main(){
  vector<int> nums = {2,2,1,1,1,1};
  cout<<majority(nums)<<endl;
  
}