// #include <iostream>
// #include<vector>
// using namespace std;
// pair<int,int> twosum(const vector<int>&nums,int target){
//   for(int i =0;i<nums.size();i++){
//     for(int j=i+1;j<nums.size();j++){
//       if(nums[i]+nums[j]== target){
//         return {i,j};
//       }
//     }
//   }
//   return {-1,-1};
// }
// int main(){
//   vector<int> nums = {1,2,4,5,6,7};
//   int target = 13;
//   pair<int,int> result = twosum(nums,target);
//   if(result.first!=-1){
//     cout<<result.first<<","<<result.second<<endl;
//   }
//   else{
//     cout<<"no pair found"<<endl;
//   }
// }
// above was teaching us pair technique // , lets use complete vectors now //


#include <iostream>
#include<vector>
using namespace std;
vector<int> twosum(const vector<int>&nums, int target){
  vector<int> answer;
  for(int i =0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
      if(nums[i]+nums[j]==target){
        answer.push_back(i);
        answer.push_back(j);
       
       
      }

    }

    }
    return answer;

  }

int main(){
  vector<int> nums = {1,2,3,4,5,6};
  int target = 11;

  vector<int> result = twosum(nums,target);
  cout<<result[0]<<","<<result[1];
}