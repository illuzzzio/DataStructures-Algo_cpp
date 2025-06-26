#include <iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> intersection(const vector<int>&v1, const vector<int>&v2){
  set<int>s(v1.begin(),v1.end());
  set<int> result;
  for(int nums:v2){
    if(s.count(nums)){ // main line //
      result.insert(nums);
    }
  }
  return vector<int>(result.begin(),result.end());
}
int main(){
  vector<int> v1 = {1,2,4,5,6,7};
  vector<int> v2 = {6,5,3,8,98,231};
   vector<int> common = intersection(v1,v2);
   for(int v:common){
    cout<<v<<" ";

   }
   cout<<endl;

}