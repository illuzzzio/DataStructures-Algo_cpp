#include<iostream>
#include<set>
#include<vector>
using namespace std;
bool containsduplicates(const vector<int>&nums){
  set<int>s(nums.begin(),nums.end());
  if(nums.size()==s.size()){
    return false;
  }
  else{
    return true;
  }
}
int main(){
  vector<int> nums = {1,2,3};
  cout<<containsduplicates(nums)<<endl;
}