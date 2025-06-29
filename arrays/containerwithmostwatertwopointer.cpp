#include<iostream>
#include<vector>
using namespace std;
int maxwater(const vector<int>&nums){
  int maximum=0;
  int left = 0;
  int right = nums.size()-1;
  while(right>left){
    int width = right-left;
      
   
    int height = min(nums[left], nums[right]);
 
  
    int area = width*height;
    maximum = max(maximum,area);
    nums[left]<nums[right]?left++:right--;
  }
  return maximum;
}
int main(){
  vector<int> nums = {1,8,6,2,5,4,8,3,7};
  cout<<maxwater(nums)<<endl;
}